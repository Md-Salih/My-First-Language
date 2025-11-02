#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<int>& vis){
    vis[node]=1;
    for(int nb:adj[node])
        if(!vis[nb]) dfs(nb,adj,vis);
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
        adj[v].push_back(u);
    }

    vector<int> vis(n,0);
    int count=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            count++;
            dfs(i,adj,vis);
        }
    }
    cout<<"Number of connected components: "<<count;
}
