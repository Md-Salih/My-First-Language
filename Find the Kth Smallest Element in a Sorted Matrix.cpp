#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Element {
    int value;
    int row;
    int col;
};

struct Compare {
    bool operator()(const Element& a, const Element& b) {
        return a.value > b.value;
    }
};

int kthSmallest(vector<vector<int>>& matrix, int k) {
    int n = matrix.size();
    priority_queue<Element, vector<Element>, Compare> minHeap;

    for (int i = 0; i < n; i++) {
        minHeap.push({matrix[i][0], i, 0});
    }

    for (int i = 0; i < k - 1; i++) {
        Element top = minHeap.top();
        minHeap.pop();

        if (top.col + 1 < n) {
            minHeap.push({matrix[top.row][top.col + 1], top.row, top.col + 1});
        }
    }

    return minHeap.top().value;
}

int main() {
    vector<vector<int>> matrix = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {24, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int k = 7;
    int result = kthSmallest(matrix, k);

    cout << "The " << k << "th smallest element in the matrix is: " << result << endl;

    return 0;
}
