#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int a[10][10], sum = 0;
    cout << "Enter matrix:\n";
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin >> a[i][j];

    for (int i=0; i<n; i++)
        for (int j=0; j<=i; j++)  // lower triangle
            sum += a[i][j];

    cout << "Sum of lower triangle elements = " << sum;
}
