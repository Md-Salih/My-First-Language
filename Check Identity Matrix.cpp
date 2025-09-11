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

    bool identity = true;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if ((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0)) {
                identity = false;
                break;
            }
        }
    }

    if (identity) cout << "Matrix is an Identity Matrix.";
    else cout << "Matrix is not an Identity Matrix.";
}
