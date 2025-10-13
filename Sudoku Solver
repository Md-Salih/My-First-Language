#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>>& grid, int r, int c, int num) {
    for (int x=0; x<9; x++)
        if (grid[r][x]==num || grid[x][c]==num || 
            grid[3*(r/3)+x/3][3*(c/3)+x%3]==num)
            return false;
    return true;
}

bool solveSudoku(vector<vector<int>>& grid, int r, int c) {
    if (r==9) return true;
    if (c==9) return solveSudoku(grid, r+1, 0);
    if (grid[r][c]!=0) return solveSudoku(grid, r, c+1);

    for (int num=1; num<=9; num++) {
        if (isSafe(grid,r,c,num)) {
            grid[r][c]=num;
            if (solveSudoku(grid,r,c+1)) return true;
            grid[r][c]=0;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> grid(9, vector<int>(9));
    cout << "Enter 9x9 Sudoku grid (0 for blanks):\n";
    for (int i=0;i<9;i++)
        for (int j=0;j<9;j++)
            cin >> grid[i][j];

    if (solveSudoku(grid,0,0)) {
        cout << "\nSolved Sudoku:\n";
        for (auto &row : grid) {
            for (int x : row) cout << x << " ";
            cout << endl;
        }
    } else cout << "No solution exists.";
}
