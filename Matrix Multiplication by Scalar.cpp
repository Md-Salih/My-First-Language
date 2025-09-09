#include <iostream>
using namespace std;

int main() {
    int n, m, scalar;
    cout << "Enter rows, cols: ";
    cin >> n >> m;
    int a[10][10];

    cout << "Enter matrix:\n";
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cin >> a[i][j];

    cout << "Enter scalar value: ";
    cin >> scalar;

    cout << "Result matrix:\n";
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++)
            cout << a[i][j] * scalar << " ";
        cout << endl;
    }
}
