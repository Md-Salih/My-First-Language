#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};
    vec1.swap(vec2);
    std::cout << "Vec1: ";
    for (int num : vec1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout << "Vec2: ";
    for (int num : vec2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
