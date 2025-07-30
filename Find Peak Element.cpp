#include <iostream>
#include <vector>

int findPeakElement(std::vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] < nums[mid + 1]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 1};
    int result = findPeakElement(nums);

    std::cout << "Peak element found at index " << result << std::endl;

    return 0;
}
