#include <sstream>
#include <iomanip>
#include <stdexcept>
#include <cstring>

#include "ciph.hpp"
#include <openssl/evp.h>
#include <openssl/rand.h>
#include <openssl/kdf.h>
#include <openssl/err.h>


ModernSecureCipher::ModernSecureCipher(const std::string& pwd)
    : password(pwd) {
}

std::vector<unsigned char> ModernSecureCipher::derive_key(
    const std::vector<unsigned char>& salt)
{
    std::vector<unsigned char> key(KEY_LENGTH);

    if (!EVP_PBE_scrypt(
        password.c_str(), password.size(),
        salt.data(), salt.size(),
        1 << 14, 8, 1,
        0,
        key.data(), key.size())) {
    }
    
    return key;
}

std::string ModernSecureCipher::encrypt(const std::string& plaintext)
{
    std::vector<unsigned char> salt(SALT_LENGTH);
    std::vector<unsigned char> nonce(NONCE_LENGTH);

    RAND_bytes(salt.data(), SALT_LENGTH);
    RAND_bytes(nonce.data(), NONCE_LENGTH);

    auto key = derive_key(salt);

    EVP_CIPHER_CTX* ctx = EVP_CIPHER_CTX_new();
    if (!ctx)
        throw std::runtime_error("Failed to create context");

    if (1 != EVP_EncryptInit_ex(ctx, EVP_aes_256_gcm(), nullptr, nullptr, nullptr))
        throw std::runtime_error("EncryptInit failed");

    EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_SET_IVLEN, NONCE_LENGTH, nullptr);

    EVP_EncryptInit_ex(ctx, nullptr, nullptr, key.data(), nonce.data());

    std::vector<unsigned char> ciphertext(plaintext.size());
    int len;

    EVP_EncryptUpdate(ctx, ciphertext.data(), &len,
        reinterpret_cast<const unsigned char*>(plaintext.data()),
        plaintext.size());

    int ciphertext_len = len;

    EVP_EncryptFinal_ex(ctx, ciphertext.data() + len, &len);
    ciphertext_len += len;

    std::vector<unsigned char> tag(16);
    EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_GET_TAG, 16, tag.data());

    EVP_CIPHER_CTX_free(ctx);

    std::vector<unsigned char> result;
    result.insert(result.end(), salt.begin(), salt.end());
    result.insert(result.end(), nonce.begin(), nonce.end());
    result.insert(result.end(), ciphertext.begin(), ciphertext.begin() + ciphertext_len);
    result.insert(result.end(), tag.begin(), tag.end());

    std::ostringstream oss;
    for (auto c : result)
        oss << std::hex << std::setw(2) << std::setfill('0') << (int)c;

    return oss.str();
}

std::string ModernSecureCipher::decrypt(const std::string& hex_data)
{
    std::vector<unsigned char> encrypted;
    for (size_t i = 0; i < hex_data.length(); i += 2)
        encrypted.push_back(std::stoi(hex_data.substr(i, 2), nullptr, 16));

    if (encrypted.size() < SALT_LENGTH + NONCE_LENGTH + 16)
        throw std::runtime_error("Too long data");

    std::vector<unsigned char> salt(encrypted.begin(), encrypted.begin() + SALT_LENGTH);
    std::vector<unsigned char> nonce(encrypted.begin() + SALT_LENGTH,
        encrypted.begin() + SALT_LENGTH + NONCE_LENGTH);

    std::vector<unsigned char> tag(encrypted.end() - 16, encrypted.end());
    std::vector<unsigned char> ciphertext(encrypted.begin() + SALT_LENGTH + NONCE_LENGTH,
        encrypted.end() - 16);

    auto key = derive_key(salt);

    EVP_CIPHER_CTX* ctx = EVP_CIPHER_CTX_new();

    EVP_DecryptInit_ex(ctx, EVP_aes_256_gcm(), nullptr, nullptr, nullptr);
    EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_SET_IVLEN, NONCE_LENGTH, nullptr);
    EVP_DecryptInit_ex(ctx, nullptr, nullptr, key.data(), nonce.data());

    std::vector<unsigned char> plaintext(ciphertext.size());
    int len;

    EVP_DecryptUpdate(ctx, plaintext.data(), &len,
        ciphertext.data(), ciphertext.size());

    EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_SET_TAG, 16, tag.data());

    if (EVP_DecryptFinal_ex(ctx, plaintext.data() + len, &len) <= 0) {
        EVP_CIPHER_CTX_free(ctx);
        throw std::runtime_error("Decryption error: Incorrect password or data is corrupted!");
    }

    EVP_CIPHER_CTX_free(ctx);

    return std::string(plaintext.begin(), plaintext.begin() + ciphertext.size());
}
