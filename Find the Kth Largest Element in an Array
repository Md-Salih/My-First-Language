#include <iostream>
#include <algorithm>
using namespace std;

int findKthLargest(int arr[], int n, int k) {
    sort(arr, arr + n);
    return arr[n - k];
}

int main() {
    int arr[] = {3, 2, 1, 5, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    int result = findKthLargest(arr, n, k);
    cout << "The " << k << "th largest element is: " << result << endl;
    return 0;
}
