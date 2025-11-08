#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node, vector<vector<int>>& adj, vector<int>& vis, vector<int>& rec){
    vis[node]=1; rec[node]=1;
    for(int nb:adj[node]){
        if(!vis[nb] && dfs(nb,adj,vis,rec)) return true;
        else if(rec[nb]) return true;
    }
    rec[node]=0;
    return false;
}

int main(){
    int n,e;
    cout<<"Enter courses and prerequisites: ";
    cin>>n>>e;
    vector<vector<int>> adj(n);
    cout<<"Enter pairs (u v) meaning u->v:\n";
    for(int i=0;i<e;i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
    }
    vector<int> vis(n,0), rec(n,0);
    bool cycle=false;
    for(int i=0;i<n;i++)
        if(!vis[i] && dfs(i,adj,vis,rec)) cycle=true;
    cout<<(cycle ? "Invalid: Cycle exists!" : "Valid course order possible");
}
