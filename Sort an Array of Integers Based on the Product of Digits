#include <iostream>
#include <algorithm>
using namespace std;

int productOfDigits(int n) {
    int product = 1;
    while (n) {
        product *= n % 10;
        n /= 10;
    }
    return product;
}

bool compare(int a, int b) {
    return productOfDigits(a) < productOfDigits(b);
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
    int arr[] = {12, 15, 20, 25, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    printArray(arr, n);
    sortArray(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
