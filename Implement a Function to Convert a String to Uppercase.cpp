#include <iostream>
#include <string>

std::string toUppercase(const std::string& str) {
    std::string uppercaseStr = str;
    for (char& c : uppercaseStr) {
        c = toupper(c);
    }
    return uppercaseStr;
}

int main() {
    std::string str = "hello";
    std::cout << "Uppercase string: " << toUppercase(str) << std::endl;
    return 0;
}

