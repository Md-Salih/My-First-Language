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

    bool upper = true;
    for (int i=1; i<n; i++) {
        for (int j=0; j<i; j++) {
            if (a[i][j] != 0) upper = false;
        }
    }

    if (upper) cout << "Matrix is Upper Triangular.";
    else cout << "Matrix is not Upper Triangular.";
}
