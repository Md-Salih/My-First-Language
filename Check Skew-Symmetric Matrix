#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int a[10][10];
    cout << "Enter matrix:\n";
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin >> a[i][j];

    bool skew = true;
    for (int i=0; i<n; i++) {
        if (a[i][i] != 0) skew = false;
        for (int j=0; j<n; j++) {
            if (a[i][j] != -a[j][i]) skew = false;
        }
    }

    if (skew) cout << "Matrix is Skew-Symmetric.";
    else cout << "Matrix is not Skew-Symmetric.";
}
