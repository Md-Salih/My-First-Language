#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b, int x) {
    return abs(a - x) < abs(b - x);
}

void sortArray(int arr[], int n, int x) {
    sort(arr, arr + n, [x](int a, int b) {
        return abs(a - x) < abs(b - x);
    });
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {10, 5, 3, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;
    cout << "Original array: ";
    printArray(arr, n);
    sortArray(arr, n, x);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
