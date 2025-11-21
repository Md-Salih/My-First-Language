#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int n,m,start;
    cin>>n>>m>>start;

    vector<vector<char>> g(n,vector<char>(m));
    vector<vector<int>> out(n,vector<int>(m,-1));

    int sx, sy;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>g[i][j];
            if(g[i][j]=='E'){ sx=i; sy=j; }
        }
    }

    queue<pair<int,int>> q;
    q.push({sx,sy});
    out[sx][sy] = start;

    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};

    while(!q.empty()){
        auto [x,y] = q.front(); q.pop();
        for(int d=0; d<4; d++){
            int nx = x+dx[d], ny = y+dy[d];
            if(nx>=0 && nx<n && ny>=0 && ny<m && out[nx][ny]==-1){
                if(out[x][y]-1 > 0){
                    out[nx][ny] = out[x][y] - 1;
                    q.push({nx,ny});
                }
            }
        }
    }

    for(auto &r: out){
        for(int x: r) cout<<x<<" ";
        cout<<"\n";
    }
}
