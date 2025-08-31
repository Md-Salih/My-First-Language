#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hello";
    std::string str2 = "World";

    // Concatenation
    std::string result = str1 + " " + str2;
    std::cout << "Concatenation: " << result << std::endl;

    // Substring
    std::string substr = str1.substr(1, 3);
    std::cout << "Substring: " << substr << std::endl;

    // Comparison
    if (str1 == str2) {
        std::cout << "Strings are equal" << std::endl;
    } else {
        std::cout << "Strings are not equal" << std::endl;
    }

    // Searching
    size_t pos = str1.find("ll");
    if (pos != std::string::npos) {
        std::cout << "Found 'll' at position " << pos << std::endl;
    }

    return 0;
}
