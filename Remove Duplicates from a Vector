#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 10, 30, 20, 40};

    // Sort the vector
    std::sort(vec.begin(), vec.end());

    // Remove duplicates
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());

    std::cout << "Vector after removing duplicates: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
