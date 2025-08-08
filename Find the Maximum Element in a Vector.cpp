#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    // Find the maximum element
    int maxElement = *std::max_element(vec.begin(), vec.end());
    std::cout << "Maximum element: " << maxElement << std::endl;

    return 0;
}

