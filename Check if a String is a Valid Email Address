#include <iostream>
#include <regex>

bool isValidEmail(const std::string& email) {
    std::regex pattern("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    return std::regex_match(email, pattern);
}

int main() {
    std::string email = "example@example.com";
    if (isValidEmail(email)) {
        std::cout << email << " is a valid email address" << std::endl;
    } else {
        std::cout << email << " is not a valid email address" << std::endl;
    }
    return 0;
}

