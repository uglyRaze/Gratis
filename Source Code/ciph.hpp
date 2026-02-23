#pragma once
#include <string>
#include <vector>

class ModernSecureCipher {
private:
    std::string password;

    static constexpr int KEY_LENGTH = 32;
    static constexpr int SALT_LENGTH = 16;
    static constexpr int NONCE_LENGTH = 12;

    std::vector<unsigned char> derive_key(const std::vector<unsigned char>& salt);

public:
    explicit ModernSecureCipher(const std::string& password);

    std::string encrypt(const std::string& plaintext);
    std::string decrypt(const std::string& hex_data);
};
