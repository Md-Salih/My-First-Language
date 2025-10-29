#include <iostream>
#include <vector>
#include <queue>
using namespace std;

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

    int src;
    cout<<"Enter source vertex: ";
    cin>>src;

    vector<int> dist(n,-1);
    queue<int> q;
    q.push(src);
    dist[src]=0;

    while(!q.empty()){
        int node=q.front(); q.pop();
        for(int nb:adj[node]){
            if(dist[nb]==-1){
                dist[nb]=dist[node]+1;
                q.push(nb);
            }
        }
    }

    cout<<"\nShortest distances from "<<src<<":\n";
    for(int i=0;i<n;i++)
        cout<<"Node "<<i<<" -> "<<dist[i]<<endl;
}
