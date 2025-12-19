#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> parent, rankv;

    DSU(int n) {
        parent.resize(n);
        rankv.assign(n, 0);
        for (int i = 0; i < n; i++) parent[i] = i;
    }

    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    void unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a != b) {
            if (rankv[a] < rankv[b]) swap(a, b);
            parent[b] = a;
            if (rankv[a] == rankv[b]) rankv[a]++;
        }
    }
};

int main() {
    int n = 5;
    vector<pair<int,int>> edges = {{0,1},{1,2},{3,4}};

    DSU dsu(n);
    for (auto &e : edges)
        dsu.unite(e.first, e.second);

    unordered_set<int> components;
    for (int i = 0; i < n; i++)
        components.insert(dsu.find(i));

    cout << components.size();
    return 0;
}
