#include <iostream>
#include <algorithm>
using namespace std;

int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (n / i == i)
                count++;
            else
                count += 2;
        }
    }
    return count;
}

bool compare(int a, int b) {
    return countDivisors(a) < countDivisors(b);
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
    return 0;
}
