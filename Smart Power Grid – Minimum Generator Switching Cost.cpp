#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int n,e;
    cin>>n>>e;
    vector<vector<pair<int,int>>> adj(n);

    while(e--){
        int u,v,c;
        cin>>u>>v>>c;
        adj[u].push_back({v,c});
        adj[v].push_back({u,c});
    }

    vector<int> vis(n,0);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

    pq.push({0,0});
    int total=0;

    while(!pq.empty()){
        auto [cost,node]=pq.top(); pq.pop();
        if(vis[node]) continue;
        vis[node]=1;
        total += cost;

        for(auto &edge:adj[node])
            pq.push({edge.second, edge.first});
    }

    cout<<"Minimum switching cost: "<<total;
}
