#include <iostream>
#include <vector>

int findFirstOccurrence

int findFirstOccurrence(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid;
            right = mid - 1; // Continue searching on the left half
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    std::vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    int target = 2;
    int result = findFirstOccurrence(arr, target);

    if (result != -1) {
        std::cout << "First occurrence of " << target << " is at index " << result << std::endl;
    } else {
        std::cout << target << " not found in the array" << std::endl;
    }
    return 0;
}
