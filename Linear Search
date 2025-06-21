#include <iostream>
#include <vector>

int linearSearch(const std::vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; // not found
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    int target = 3;
    int result = linearSearch(arr, target);
    if (result != -1) {
        std::cout << "Target found at index " << result << std::endl;
    } else {
        std::cout << "Target not found" << std::endl;
    }
    return 0;
}

