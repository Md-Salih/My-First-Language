#include <queue>
#include <iostream>
using namespace std;

int findKthLargest(int arr[], int n, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++) {
        pq.push(arr[i]);
        if (pq.size() > k)
            pq.pop();
    }
    return pq.top();
}

int main() {
    int arr[] = {3, 2, 1, 5, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    cout << "K'th largest element is " << findKthLargest(arr, n, k);
    return 0;
}
