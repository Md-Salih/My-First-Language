#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>>& g,int x,int y){
    if(x<0||y<0||x>=g.size()||y>=g[0].size()||g[x][y]==0) return;
    g[x][y]=0;
    dfs(g,x+1,y); dfs(g,x-1,y);
    dfs(g,x,y+1); dfs(g,x,y-1);
    dfs(g,x+1,y+1); dfs(g,x-1,y-1);
}

int main(){
    int n,m;
    cout<<"Enter grid size: ";
    cin>>n>>m;
    vector<vector<int>> g(n,vector<int>(m));
    cout<<"Enter grid (1 land, 0 water):\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>g[i][j];

    int count=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(g[i][j]==1){ count++; dfs(g,i,j); }

    cout<<"Number of islands: "<<count;
}
