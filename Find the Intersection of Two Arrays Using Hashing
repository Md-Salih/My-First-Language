#include <iostream>
#include <unordered_set>
using namespace std;

void intersection(int arr1[], int m, int arr2[], int n) {
    unordered_set<int> set;
    for (int i = 0; i < m; i++)
        set.insert(arr1[i]);
    for (int i = 0; i < n; i++) {
        if (set.find(arr2[i]) != set.end())
            cout << arr2[i] << " ";
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {4, 5, 6, 7, 8};
    int n = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Intersection: ";
    intersection(arr1, m, arr2, n);
    return 0;
}
