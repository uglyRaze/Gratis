# Gratis
Gratis (Latin: Free) is a password-based encryption tool built with Qt6 and modern cryptography.

It gives users full control over their passwords — no master keys, no hidden backdoors, no centralized recovery mechanisms.

You choose the password.
You control the security.
You accept the responsibility.

🧠 Philosophy

Gratis follows one simple principle:

There is no universal key.
Security depends entirely on the password you choose.

The application does not enforce password complexity rules.
Even a password like "1" will technically work.

However:

Weak passwords are vulnerable to brute-force attacks.

Strong, high-entropy passwords dramatically increase security.

Security is user-defined, not system-enforced.

🛡 Cryptography

Gratis uses modern, authenticated encryption:

AES-256-GCM (Authenticated Encryption with Associated Data)

scrypt (memory-hard key derivation function)

Cryptographically secure random salt and nonce (OpenSSL)

Key Derivation (scrypt parameters)
N = 2^14
r = 8
p = 1

Each encryption operation:

Generates a new random salt

Generates a new random nonce

Derives a 256-bit key from the user password

Produces a 16-byte authentication tag

Encrypted Data Structure

Before hex encoding, data is structured as:

[salt | nonce | ciphertext | tag]

The final output is stored as a HEX string.
