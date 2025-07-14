#include <iostream>

int main() {
    int num = 5;
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    std::cout << "Factorial of " << num << ": " << factorial << std::endl;
    return 0;
}

