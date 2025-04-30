#include <iostream>
#include <unordered_set>

int findFirstDuplicate(int arr[], int size) {
    std::unordered_set<int> numSet;

    for (int i = 0; i < size; i++) {
        if (numSet.find(arr[i]) != numSet.end()) {
            return arr[i];
        }
        numSet.insert(arr[i]);
    }

    return -1; // No duplicates found
}

int main() {
    int arr[] = {2, 1, 3, 5, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int duplicate = findFirstDuplicate(arr, size);

    if (duplicate != -1) {
        std::cout << "First duplicate: " << duplicate << std::endl;
    } else {
        std::cout << "No duplicates found" << std::endl;
    }

    return 0;
}
