#include <iostream>

int main() {
    double length, width;
    std::cout << "Enter length and width: ";
    std::cin >> length >> width;

    double area = length * width;
    std::cout << "Area: " << area << std::endl;

    return 0;
}
