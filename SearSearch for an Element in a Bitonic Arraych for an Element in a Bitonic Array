#include <iostream>
#include <vector>

int findPeak(const std::vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] < arr[mid + 1]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left;
}

int binarySearch(const std::vector<int>& arr, int left, int right, int target, bool ascending) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (ascending) {
            if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        } else {
            if (arr[mid] < target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
    }

    return -1;
}

int searchBitonicArray(const std::vector<int>& arr, int target) {
    int peak = findPeak(arr);

    int result = binarySearch(arr, 0, peak, target, true);
    if (result != -1) {
        return result;
    }

    return binarySearch(arr, peak + 1, arr.size() - 1, target, false);
}

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 8, 6, 4, 2};
    int target = 7;
    int result = searchBitonicArray(arr, target);

    if (result != -1) {
        std::cout << target << " found at index " << result << std::endl;
    } else {
        std::cout << target << " not found in the array" << std::endl;
    }

    return 0;
}

