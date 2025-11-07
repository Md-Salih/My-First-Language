#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int n,e;
    cout<<"Enter vertices and edges: ";
    cin>>n>>e;
    vector<vector<int>> adj(n);
    vector<int> indeg(n,0);

    cout<<"Enter edges (u v):\n";
    for(int i=0;i<e;i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        indeg[v]++;
    }

    queue<int> q;
    for(int i=0;i<n;i++) if(indeg[i]==0) q.push(i);

    vector<int> topo;
    while(!q.empty()){
        int node=q.front(); q.pop();
        topo.push_back(node);
        for(int nb:adj[node]){
            indeg[nb]--;
            if(indeg[nb]==0) q.push(nb);
        }
    }

    cout<<"Topological Order: ";
    for(int x:topo) cout<<x<<" ";
}
