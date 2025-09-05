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

    int top=0, bottom=n-1, left=0, right=m-1;
    cout << "Spiral Order: ";
    while (top <= bottom && left <= right) {
        for (int i=left; i<=right; i++) cout << a[top][i] << " ";
        top++;
        for (int i=top; i<=bottom; i++) cout << a[i][right] << " ";
        right--;
        if (top <= bottom) {
            for (int i=right; i>=left; i--) cout << a[bottom][i] << " ";
            bottom--;
        }
        if (left <= right) {
            for (int i=bottom; i>=top; i--) cout << a[i][left] << " ";
            left++;
        }
    }
}
