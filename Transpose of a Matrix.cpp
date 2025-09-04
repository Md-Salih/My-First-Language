#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter rows and cols: ";
    cin >> n >> m;

    int a[10][10];
    cout << "Enter matrix:\n";
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cin >> a[i][j];

    cout << "Transpose:\n";
    for (int j=0; j<m; j++) {
        for (int i=0; i<n; i++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
