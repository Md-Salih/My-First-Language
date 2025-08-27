#include <iostream>
#include <algorithm>
using namespace std;

void sortInWave(int arr[], int n) {
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    printArray(arr, n);
    sortInWave(arr, n);
    cout << "Array in wave form: ";
    printArray(arr, n);
    return 0;
}
