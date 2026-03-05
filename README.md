# Gratis
A free and open-source file encryption tool using AES-256-GCM + scrypt

---

## Why "Gratis"?

The name reflects the project's philosophy:

- No enforced password rules - you can use "1" if you want, but security is then your responsibility.
- No hidden keys, backdoors, or centralized control.
- No telemetry.
- The tool is free and open for anyone to use, modify, and distribute.

---

**Gratis** (Latin for "Free") is a Qt6-based desktop application that allows users to encrypt and decrypt `.txt` files using a password of their choice.

It emphasizes freedom, simplicity, and user control:

- No master key
- No password storage
- No cloud services
- No external dependencies beyond required cryptographic libraries
- Full control stays with the user

---

## Features

- AES-256-GCM encryption with scrypt key derivation
- Qt6 graphical interface
- Password entry screen with a minimum length of 1 character
- Cryptographically secure password generator (random bytes)
- File selection (only `.txt` files are supported)
- Separate tabs for Encrypt / Decrypt modes
- Double encryption protection - if a file already contains `[SECURED]` at the beginning, encryption is blocked
- Cross-platform (Windows / Linux / macOS)

---

## How It Works

1. Launch the app - you are greeted with a password screen.
   - Enter any password (minimum length: 1).
   - Optionally, generate a cryptographically strong random password.
   - The password is used only for the current session and is never stored.

**[Page 1] Entrance**  
![Entrance](https://github.com/user-attachments/assets/ed9eae6e-5239-45e1-a1ab-3abed61470bb)

**[Page 1] Strong password**  
![Strong password](https://github.com/user-attachments/assets/29a9b850-78a1-4de5-96cb-eab9a09142a5)

2. After entering the password, you are taken to the main screen.
   - Select or create a `.txt` file.
   - Choose between **Encrypt** or **Decrypt** in the tabs.
   - Click the button to process the file.

**[Page 2] Settings**  
![Settings](https://github.com/user-attachments/assets/ed229fbb-721a-477e-bcf4-8f2e189b92ec)

**[Page 2] Encrypt mode**  
![Encrypt mode](https://github.com/user-attachments/assets/267fb3e3-121d-4e2a-b95f-c7de3358d01b)

From "Hello World!" we have:  

[SECURED]d67c25a0038a45a44b1b0ec9d73da500507edf52e160923bd89b7485e3cdccfa38576a339593c126e60beb003928d416b7f4ef78d68d11ce00


**[Page 2] Decrypt mode**  
![Decrypt mode](https://github.com/user-attachments/assets/34186803-e3e2-4950-8936-5d89a7d77491)

From cipher we have again "Hello World!"

**NOTE:** File is already encrypted (starts with `[SECURED]`), encryption will be disabled to prevent double encryption.

---

## Security Notes

- AES-256-GCM provides authenticated encryption.
- scrypt protects against brute-force attacks by being memory-hard.
- No password is stored anywhere.
- If you forget your password, the data cannot be recovered.
- Weak passwords reduce security - use strong passwords for sensitive data.

---

## Building From Source

Requirements:

- Qt 6.x
- C++17 compatible compiler
- CMake (recommended)

Basic steps:


mkdir build
cd build
cmake ..
cmake --build .


---
## Philosophy

Security should not require permission.  
Privacy should not depend on trust.  
Freedom means responsibility.  
