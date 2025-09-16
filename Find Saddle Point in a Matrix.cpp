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

    bool found = false;
    for (int i=0; i<n; i++) {
        int rowMin = a[i][0], colIndex = 0;
        for (int j=1; j<n; j++) {
            if (a[i][j] < rowMin) {
                rowMin = a[i][j];
                colIndex = j;
            }
        }

        bool isSaddle = true;
        for (int k=0; k<n; k++) {
            if (a[k][colIndex] > rowMin) {
                isSaddle = false;
                break;
            }
        }
        if (isSaddle) {
            cout << "Saddle point: " << rowMin << endl;
            found = true;
        }
    }
    if (!found) cout << "No saddle point found.";
}
