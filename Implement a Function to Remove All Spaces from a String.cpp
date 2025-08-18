#include <iostream>
#include <string>

std::string removeSpaces(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (c != ' ') {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string str = "Hello World";
    std::cout << "String without spaces: " << removeSpaces(str) << std::endl;
    return 0;
}


