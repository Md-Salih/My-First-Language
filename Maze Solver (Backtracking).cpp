#include <iostream>
#include <vector>
using namespace std;

int N;

bool isSafe(vector<vector<int>>& maze, int x, int y, vector<vector<int>>& sol) {
    return (x>=0 && x<N && y>=0 && y<N && maze[x][y]==1 && sol[x][y]==0);
}

bool solveMazeUtil(vector<vector<int>>& maze, int x, int y, vector<vector<int>>& sol) {
    if (x==N-1 && y==N-1 && maze[x][y]==1) {
        sol[x][y]=1;
        return true;
    }
    if (isSafe(maze,x,y,sol)) {
        sol[x][y]=1;
        if (solveMazeUtil(maze,x+1,y,sol)) return true;
        if (solveMazeUtil(maze,x,y+1,sol)) return true;
        sol[x][y]=0;
        return false;
    }
    return false;
}

int main() {
    cout << "Enter maze size: ";
    cin >> N;
    vector<vector<int>> maze(N, vector<int>(N));
    cout << "Enter maze (0=blocked, 1=open):\n";
    for (int i=0;i<N;i++)
        for (int j=0;j<N;j++)
            cin >> maze[i][j];

    vector<vector<int>> sol(N, vector<int>(N,0));
    if (solveMazeUtil(maze,0,0,sol)) {
        cout << "Path found:\n";
        for (int i=0;i<N;i++) {
            for (int j=0;j<N;j++) cout << sol[i][j] << " ";
            cout << endl;
        }
    } else {
        cout << "No path exists!" << endl;
    }
}
