#include <iostream>
#include <vector>
using namespace std;

int n;
vector<vector<int>> maze, path;
bool found = false;

bool isSafe(int x, int y) {
    return (x>=0 && y>=0 && x<n && y<n && maze[x][y]==1 && path[x][y]==0);
}

void solve(int x, int y) {
    if (x==n-1 && y==n-1) {
        path[x][y]=1;
        found=true;
        cout << "\nPath:\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cout<<path[i][j]<<" ";
            cout<<endl;
        }
        path[x][y]=0;
        return;
    }

    if (isSafe(x,y)) {
        path[x][y]=1;
        solve(x+1,y);
        solve(x,y+1);
        solve(x-1,y);
        solve(x,y-1);
        path[x][y]=0;
    }
}

int main(){
    cout<<"Enter size of maze: ";
    cin>>n;
    maze.assign(n, vector<int>(n));
    path.assign(n, vector<int>(n,0));

    cout<<"Enter maze (0-blocked, 1-open):\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) cin>>maze[i][j];

    solve(0,0);
    if(!found) cout<<"No path exists!";
}
