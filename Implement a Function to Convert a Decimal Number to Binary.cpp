#include <iostream>
#include <string>

std::string decimalToBinary(int num) {
    std::string binary = "";
    while (num > 0) {
        binary = (num % 2 == 0 ? "0" : "1") + binary;
        num /= 2;
    }
    return binary;
}

int main() {
    int num;
    std::cout << "Enter a decimal number: ";
    std::cin >> num;
    std::cout << "Binary: " << decimalToBinary(num) << std::endl;
    return 0;
}
