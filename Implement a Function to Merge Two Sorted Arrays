 Implement a Function to Merge Two Sorted Arrays

#include <iostream>

void mergeSortedArrays(int arr1[], int m, int arr2[], int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k--] = arr1[i--];
        } else {
            arr1[k--] = arr2[j--];
        }
    }

    while (j >= 0) {
        arr1[k--] = arr2[j--];
    }
}

int main() {
    int arr1[7] = {1, 3, 5, 7, 0, 0, 0};
    int arr2[] = {2, 4, 6};
    int m = 4;
    int n = 3;

    mergeSortedArrays(arr1, m, arr2, n);

    std::cout << "Merged array: ";
    for (int i = 0; i < m + n; i++) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
