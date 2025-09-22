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

    int upper=0, lower=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i <= j) upper += a[i][j];
            if (i >= j) lower += a[i][j];
        }
    }

    cout << "Upper triangular sum = " << upper << endl;
    cout << "Lower triangular sum = " << lower;
}
