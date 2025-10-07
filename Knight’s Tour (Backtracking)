#include <iostream>
#include <vector>
using namespace std;

int N;
int moveX[8] = {2,1,-1,-2,-2,-1,1,2};
int moveY[8] = {1,2,2,1,-1,-2,-2,-1};

bool isSafe(int x, int y, vector<vector<int>>& sol) {
    return (x>=0 && y>=0 && x<N && y<N && sol[x][y]==-1);
}

bool solveKTUtil(int x, int y, int movei, vector<vector<int>>& sol) {
    if (movei == N*N) return true;
    for (int k=0; k<8; k++) {
        int nx = x + moveX[k], ny = y + moveY[k];
        if (isSafe(nx, ny, sol)) {
            sol[nx][ny] = movei;
            if (solveKTUtil(nx, ny, movei+1, sol)) return true;
            sol[nx][ny] = -1;
        }
    }
    return false;
}

int main() {
    cout << "Enter board size: ";
    cin >> N;
    vector<vector<int>> sol(N, vector<int>(N,-1));
    sol[0][0]=0;

    if (solveKTUtil(0,0,1,sol)) {
        for (int i=0;i<N;i++) {
            for (int j=0;j<N;j++) cout << sol[i][j] << "\t";
            cout << endl;
        }
    } else cout << "No solution exists!";
}
