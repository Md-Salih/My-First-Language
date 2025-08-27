#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {40, 20, 10, 30, 50};

    // Sort the vector in ascending order
    std::sort(vec.begin(), vec.end());
    std::cout << "Sorted vector (ascending): ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sort the vector in descending order
    std::sort(vec.rbegin(), vec.rend());
    std::cout << "Sorted vector (descending): ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
