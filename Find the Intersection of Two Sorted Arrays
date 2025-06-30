#include <iostream>
using namespace std;

void findIntersection(int arr1[], int m, int arr2[], int n) {
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Intersection: ";
    findIntersection(arr1, m, arr2, n);
    return 0;
}
