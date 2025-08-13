#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    std::cout << "Sum of digits: " << sum << std::endl;

    return 0;
}


