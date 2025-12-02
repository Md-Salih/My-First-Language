#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int &x : arr) cin >> x;

    // Place each number in correct index (1 → index 0)
    for(int i = 0; i < n; i++) {
        while(arr[i] >= 1 && arr[i] <= n && arr[arr[i]-1] != arr[i]) {
            swap(arr[i], arr[arr[i]-1]);
        }
    }

    // Find first place where index doesn't match value
    for(int i = 0; i < n; i++) {
        if(arr[i] != i+1) {
            cout << i+1;
            return 0;
        }
    }

    cout << n+1;
    return 0;
}
