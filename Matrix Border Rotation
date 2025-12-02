#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> a(r, vector<int>(c));

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> a[i][j];

    int temp = a[0][0];

    // top row
    for(int j = 0; j < c-1; j++)
        a[0][j] = a[0][j+1];

    // right column
    for(int i = 0; i < r-1; i++)
        a[i][c-1] = a[i+1][c-1];

    // bottom row
    for(int j = c-1; j > 0; j--)
        a[r-1][j] = a[r-1][j-1];

    // left column
    for(int i = r-1; i > 1; i--)
        a[i][0] = a[i-1][0];

    a[1][0] = temp;

    // Output
    for(auto &row : a) {
        for(int x : row) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
