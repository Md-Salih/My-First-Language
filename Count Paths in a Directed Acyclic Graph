#include <iostream>
#include <vector>
using namespace std;

int countPaths(int src, int dest, vector<vector<int>>& adj, vector<int>& dp){
    if(src==dest) return 1;
    if(dp[src]!=-1) return dp[src];
    int total=0;
    for(int nb:adj[src])
        total+=countPaths(nb,dest,adj,dp);
    return dp[src]=total;
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
    vector<int> dp(n,-1);
    cout<<"Total paths: "<<countPaths(src,dest,adj,dp);
}
