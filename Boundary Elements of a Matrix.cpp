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

    cout << "Boundary elements:\n";
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            if (i==0 || j==0 || i==r-1 || j==c-1)
                cout << a[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}
