#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int kthSmallest(vector<int>& arr, int k) {
    priority_queue<int> maxHeap;
    for (int x : arr) {
        maxHeap.push(x);
        if (maxHeap.size() > k)
            maxHeap.pop();
    }
    return maxHeap.top();
}

int main() {
    int n,k;
    cout << "Enter size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i=0;i<n;i++) cin >> arr[i];
    cout << "Enter k: ";
    cin >> k;

    cout << k << "th smallest element: " << kthSmallest(arr,k);
}
