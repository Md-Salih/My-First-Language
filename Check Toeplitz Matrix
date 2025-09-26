#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and cols: ";
    cin >> r >> c;

    int a[10][10];
    cout << "Enter matrix:\n";
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++)
            cin >> a[i][j];

    bool toeplitz = true;
    for (int i=1; i<r; i++) {
        for (int j=1; j<c; j++) {
            if (a[i][j] != a[i-1][j-1]) toeplitz = false;
        }
    }

    if (toeplitz) cout << "Matrix is Toeplitz.";
    else cout << "Matrix is not Toeplitz.";
}
