#include <iostream>

int main() {
    char c;
    std::cout << "Enter a character: ";
    std::cin >> c;

    if (c >= '0' && c <= '9') {
        std::cout << c << " is a digit" << std::endl;
    } else {
        std::cout << c << " is not a digit" << std::endl;
    }

    return 0;
}
