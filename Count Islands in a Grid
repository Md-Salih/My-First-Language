#include <iostream>
#include <vector>
using namespace std;

int n,m;
vector<vector<int>> grid;
vector<vector<int>> vis;
int dx[]={1,-1,0,0,1,-1,1,-1};
int dy[]={0,0,1,-1,1,-1,-1,1};

void dfs(int x,int y){
    vis[x][y]=1;
    for(int i=0;i<8;i++){
        int nx=x+dx[i], ny=y+dy[i];
        if(nx>=0 && ny>=0 && nx<n && ny<m && grid[nx][ny]==1 && !vis[nx][ny])
            dfs(nx,ny);
    }
}

int main(){
    cout<<"Enter rows and cols: ";
    cin>>n>>m;
    grid.assign(n, vector<int>(m));
    vis.assign(n, vector<int>(m,0));

    cout<<"Enter grid (0-water, 1-land):\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) cin>>grid[i][j];

    int count=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(grid[i][j]==1 && !vis[i][j]){
                count++;
                dfs(i,j);
            }

    cout<<"Number of islands: "<<count;
}
