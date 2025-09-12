#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter rows and cols: ";
    cin >> n >> m;

    int a[10][10], zeros = 0;
    cout << "Enter matrix:\n";
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 0) zeros++;
        }

    if (zeros > (n*m)/2) cout << "Matrix is Sparse.";
    else cout << "Matrix is not Sparse.";
}
