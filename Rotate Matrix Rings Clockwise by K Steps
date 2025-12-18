#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> mat = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int k = 1;
    int n = mat.size(), m = mat[0].size();

    int top = 0, bottom = n - 1, left = 0, right = m - 1;

    while (top < bottom && left < right) {
        vector<int> ring;

        for (int i = left; i <= right; i++) ring.push_back(mat[top][i]);
        for (int i = top + 1; i <= bottom; i++) ring.push_back(mat[i][right]);
        for (int i = right - 1; i >= left; i--) ring.push_back(mat[bottom][i]);
        for (int i = bottom - 1; i > top; i--) ring.push_back(mat[i][left]);

        int len = ring.size();
        k %= len;
        rotate(ring.rbegin(), ring.rbegin() + k, ring.rend());

        int idx = 0;
        for (int i = left; i <= right; i++) mat[top][i] = ring[idx++];
        for (int i = top + 1; i <= bottom; i++) mat[i][right] = ring[idx++];
        for (int i = right - 1; i >= left; i--) mat[bottom][i] = ring[idx++];
        for (int i = bottom - 1; i > top; i--) mat[i][left] = ring[idx++];

        top++; bottom--; left++; right--;
    }

    for (auto &row : mat) {
        for (int x : row) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
