#include <iostream>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

void sortPairs(pair<int, int> arr[], int n) {
    sort(arr, arr + n, compare);
}

void printArray(pair<int, int> arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << "(" << arr[i].first << ", " << arr[i].second << ") ";
    cout << endl;
}

int main() {
    pair<int, int> arr[] = {{1, 2}, {3, 1}, {2, 4}, {4, 3}};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    printArray(arr, n);
    sortPairs(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
