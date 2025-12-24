#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> parent, rankv;
    
    DSU(int n) {
        parent.resize(n+1);
        rankv.resize(n+1, 0);
        for(int i = 1; i <= n; i++)
            parent[i] = i;
    }

    int find(int x) {
        if(parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    void unite(int a, int b) {
        a = find(a);
        b = find(b);
        if(a == b) return;

        if(rankv[a] < rankv[b]) swap(a,b);
        parent[b] = a;
        if(rankv[a] == rankv[b]) rankv[a]++;
    }
};

int main() {
    int n = 5;
    DSU dsu(n);

    vector<pair<int,int>> edges = {{1,2},{2,3},{4,5}};

    for(auto &e : edges)
        dsu.unite(e.first, e.second);

    set<int> components;
    for(int i = 1; i <= n; i++)
        components.insert(dsu.find(i));

    cout << components.size();
    return 0;
}
