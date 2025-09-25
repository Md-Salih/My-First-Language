#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and cols: ";
    cin >> r >> c;

    int a[10][10], zeroCount=0;
    cout << "Enter matrix:\n";
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            cin >> a[i][j];
            if (a[i][j]==0) zeroCount++;
        }
    }

    if (zeroCount > (r*c)/2) cout << "Matrix is Sparse.";
    else cout << "Matrix is Dense.";
}
