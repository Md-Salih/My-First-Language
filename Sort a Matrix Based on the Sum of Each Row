#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int arr1[], int arr2[], int n) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        sum1 += arr1[i];
        sum2 += arr2[i];
    }
    return sum1 < sum2;
}

void sortMatrix(int matrix[][3], int row) {
    for (int i = 0; i < row - 1; i++) {
        for (int j = i + 1; j < row; j++) {
            if (!compare(matrix[i], matrix[j], 3)) {
                for (int k = 0; k < 3; k++)
                    swap(matrix[i][k], matrix[j][k]);
            }
        }
    }
}

void printMatrix(int matrix[][3], int row) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < 3; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int matrix[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = sizeof(matrix) / sizeof(matrix[0]);
    cout << "Original matrix: " << endl;
    printMatrix(matrix, row);
    sortMatrix(matrix, row);
    cout << "Sorted matrix: " << endl;
    printMatrix(matrix, row);
    return 0;
}
