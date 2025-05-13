#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 1, 1, 1};
    if (std::adjacent_find(vec.begin(), vec.end(), std::not_equal_to<int>()) == vec.end()) {
        std::cout << "All elements are equal" << std::endl;
    } else {
        std::cout << "Not all elements are equal" << std::endl;
    }
    return 0;
}
