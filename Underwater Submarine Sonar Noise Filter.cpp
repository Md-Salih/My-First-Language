#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    vector<vector<int>> g(n, vector<int>(m)), out(n, vector<int>(m));

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> g[i][j];

    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int sum=g[i][j], count=1;

            for(int d=0; d<4; d++){
                int x=i+dx[d], y=j+dy[d];
                if(x>=0 && x<n && y>=0 && y<m){
                    sum += g[x][y];
                    count++;
                }
            }
            out[i][j] = sum / count;
        }
    }

    for(auto &r:out){
        for(int x:r) cout<<x<<" ";
        cout<<"\n";
    }
}
