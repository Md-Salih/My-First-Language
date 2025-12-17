#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 3, -2, 8, 5, 7};
    int n = arr.size();

    int LOG = log2(n) + 1;
    vector<vector<int>> st(n, vector<int>(LOG));

    // Build table
    for (int i = 0; i < n; i++)
        st[i][0] = arr[i];

    for (int j = 1; j < LOG; j++) {
        for (int i = 0; i + (1 << j) <= n; i++) {
            st[i][j] = min(st[i][j-1], st[i + (1 << (j-1))][j-1]);
        }
    }

    // Query example
    int L = 1, R = 4;
    int len = R - L + 1;
    int k = log2(len);

    cout << min(st[L][k], st[R - (1 << k) + 1][k]);
    return 0;
}
