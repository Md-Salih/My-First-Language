#include <iostream>
#include <vector>
using namespace std;

void dfs(int u, int dest, vector<vector<int>>& adj, vector<int>& path, vector<vector<int>>& all){
    path.push_back(u);
    if(u==dest) all.push_back(path);
    else for(int nb:adj[u]) dfs(nb,dest,adj,path,all);
    path.pop_back();
}

int main(){
    int n,e;
    cout<<"Enter vertices and edges: ";
    cin>>n>>e;
    vector<vector<int>> adj(n);
    cout<<"Enter edges (u v):\n";
    for(int i=0;i<e;i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
    }
    int src,dest;
    cout<<"Enter source and destination: ";
    cin>>src>>dest;
    vector<int> path;
    vector<vector<int>> all;
    dfs(src,dest,adj,path,all);
    cout<<"\nAll Paths:\n";
    for(auto &p:all){
        for(int x:p) cout<<x<<" ";
        cout<<endl;
    }
}
