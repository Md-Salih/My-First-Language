#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    vector<int> up(n, 0), down(n, 0);

    // Increasing
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) up[i] = up[i - 1] + 1;
    }

    // Decreasing
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > arr[i + 1]) down[i] = down[i + 1] + 1;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (up[i] > 0 && down[i] > 0) {
            ans = max(ans, up[i] + down[i] + 1);
        }
    }

    cout << ans;
    return 0;
}
