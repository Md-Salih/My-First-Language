#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {3, 4, 5};
    for (int num : vec1) {
        if (std::find(vec2.begin(), vec2.end(), num) != vec2.end()) {
            std::cout << "Vectors have common elements" << std::endl;
            return 0;
        }
    }
    std::cout << "Vectors do not have common elements" << std::endl;
    return 0;
}

