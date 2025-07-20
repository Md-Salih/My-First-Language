#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::sort(vec.begin(), vec.end());
    if (std::adjacent_find(vec.begin(), vec.end()) != vec.end()) {
        std::cout << "Vector contains duplicate elements" << std::endl;
    } else {
        std::cout << "Vector does not contain duplicate elements" << std::endl;
    }
    return 0;
}

