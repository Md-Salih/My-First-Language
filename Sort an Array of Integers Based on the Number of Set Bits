include <iostream>
#include <algorithm>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

bool compare(int a, int b) {
    return countSetBits(a) < countSetBits(b);
}

void sortArray(int arr[], int n) {
    sort(arr, arr + n, compare);
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 3, 9, 4, 6, 7, 15, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    printArray(arr, n);
    sortArray(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
