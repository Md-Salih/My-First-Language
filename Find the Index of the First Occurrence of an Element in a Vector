#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    int target = 3;
    auto it = std::find(vec.begin(), vec.end(), target);
    if (it != vec.end()) {
        std::cout << "Index of " << target << ": " << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << target << " not found" << std::endl;
    }
    return 0;
}
