#include <bits/stdc++.h>
using namespace std;

struct Edge{
    int to,w,toll;
};

int main(){
    int n=5;
    vector<vector<Edge>> g(n);

    auto add=[&](int u,int v,int w,int toll){
        g[u].push_back({v,w,toll});
        g[v].push_back({u,w,toll});
    };

    add(0,1,2,0);
    add(1,2,4,1);
    add(0,3,3,1);
    add(3,2,2,0);
    add(2,4,1,0);

    int K=1;
    int src=0, dest=4;

    vector<vector<int>> dist(n, vector<int>(K+1,1e9));
    priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<>> pq;

    dist[src][0]=0;
    pq.push({0,src,0});

    while(!pq.empty()){
        auto [d,u,t]=pq.top(); pq.pop();
        if(d!=dist[u][t]) continue;

        for(auto &e:g[u]){
            int nt=t+e.toll;
            if(nt<=K && dist[e.to][nt] > d+e.w){
                dist[e.to][nt]=d+e.w;
                pq.push({dist[e.to][nt], e.to, nt});
            }
        }
    }

    int ans=*min_element(dist[dest].begin(),dist[dest].end());
    if(ans==1e9) cout<<"No Path";
    else cout<<ans;
}
