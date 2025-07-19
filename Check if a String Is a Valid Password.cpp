#include <iostream>
#include <string>
#include <cctype>

bool isValidPassword(const std::string& password) {
    bool hasUppercase = false;
    bool hasLowercase = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;

    for (char c : password) {
        if (isupper(c)) {
            hasUppercase = true;
        } else if (islower(c)) {
            hasLowercase = true;
        } else if (isdigit(c)) {
            hasDigit = true;
        } else if (!isalnum(c)) {
            hasSpecialChar = true;
        }
    }

    return hasUppercase && hasLowercase && hasDigit && hasSpecialChar;
}

int main() {
    std::string password = "P@ssw0rd";
    if (isValidPassword(password)) {
        std::cout << "Password is valid" << std::endl;
    } else {
        std::cout << "Password is not valid" << std::endl;
    }
    return 0;
}

