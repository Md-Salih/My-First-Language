#include <iostream>
#include <climits>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int minVal = INT_MAX;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] < minVal) {
                minVal = arr[i][j];
            }
        }
    }

    std::cout << "Minimum value: " << minVal << std::endl;

    return 0;
}
