#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;
const long long MOD = 1e9+7;

int main(){
    int n = 4;
    vector<vector<pair<int,int>>> g(n+1);

    g[1].push_back({2,2});
    g[1].push_back({3,2});
    g[2].push_back({3,1});
    g[2].push_back({4,3});
    g[3].push_back({4,2});

    vector<long long> dist(n+1, INF), ways(n+1,0);
    priority_queue<pair<long long,int>,
        vector<pair<long long,int>>,
        greater<pair<long long,int>>> pq;

    dist[1] = 0;
    ways[1] = 1;
    pq.push({0,1});

    while(!pq.empty()){
        auto [d,node] = pq.top();
        pq.pop();

        if(d != dist[node]) continue;

        for(auto &e : g[node]){
            int nxt = e.first;
            long long w = e.second;

            if(dist[nxt] > d + w){
                dist[nxt] = d + w;
                ways[nxt] = ways[node];
                pq.push({dist[nxt], nxt});
            }
            else if(dist[nxt] == d + w){
                ways[nxt] = (ways[nxt] + ways[node]) % MOD;
            }
        }
    }

    for(int i=1;i<=n;i++)
        cout << "Node " << i 
             << " dist=" << dist[i]
             << " ways=" << ways[i] << "\n";
}
