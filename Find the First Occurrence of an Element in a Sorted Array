#include <iostream>
#include <vector>

int findFirstOccurrence(std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;
            right = mid - 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 2, 3, 4, 4, 5};
    int target = 2;
    int result = findFirstOccurrence(nums, target);

    if (result != -1) {
        std::cout << "First occurrence of target found at index " << result << std::endl;
    } else {
        std::cout << "Target not found" << std::endl;
    }
    return 0;
}
