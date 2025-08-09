#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    int maxElement = *std::max_element(vec.begin(), vec.end());
    int minElement = *std::min_element(vec.begin(), vec.end());
    std::cout << "Maximum element: " << maxElement << std::endl;
    std::cout << "Minimum element: " << minElement << std::endl;
    return 0;
}

