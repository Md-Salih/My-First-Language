#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void sortStrings(string arr[], int n) {
    sort(arr, arr + n);
}

void printArray(string arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    string arr[] = {"dog", "cat", "apple", "banana", "elephant"};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    printArray(arr, n);
    sortStrings(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
