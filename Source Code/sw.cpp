#include "ciph.hpp"
#include <openssl/rand.h>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;
string get_password() {
    const int KEY_LENGTH = 32; 
    vector<unsigned char> key(KEY_LENGTH);
    if (RAND_bytes(key.data(), key.size()) != 1) {
        cerr << "Random key generation failed!" << endl;
        return "";
    }
    stringstream ss;
    for (auto b : key)
        ss << hex << setw(2) << setfill('0') << (int)b;

    return ss.str();
}

int main() {
    cout << get_password();
}
