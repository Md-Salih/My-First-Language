#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    // Add elements to the vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    std::cout << "Vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Insert an element at a specified position
    vec.insert(vec.begin() + 1, 15);
    std::cout << "Vector after insertion: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Remove an element from a specified position
    vec.erase(vec.begin() + 1);
    std::cout << "Vector after deletion: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Resize the vector
    vec.resize(5);
    std::cout << "Vector after resizing: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
