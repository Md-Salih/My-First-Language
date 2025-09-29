#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, w;
};

int findParent(int u, vector<int>& parent) {
    if (parent[u] == u) return u;
    return parent[u] = findParent(parent[u], parent);
}

void kruskal(vector<Edge>& edges, int n) {
    sort(edges.begin(), edges.end(), [](Edge a, Edge b){ return a.w < b.w; });
    vector<int> parent(n);
    for (int i=0; i<n; i++) parent[i] = i;

    int mstWeight = 0;
    cout << "Edges in MST:\n";
    for (auto e : edges) {
        int pu = findParent(e.u, parent);
        int pv = findParent(e.v, parent);
        if (pu != pv) {
            cout << e.u << " - " << e.v << " : " << e.w << endl;
            mstWeight += e.w;
            parent[pu] = pv;
        }
    }
    cout << "Total weight of MST = " << mstWeight;
}

int main() {
    int n = 4;
    vector<Edge> edges = {
        {0,1,10}, {0,2,6}, {0,3,5}, {1,3,15}, {2,3,4}
    };

    kruskal(edges, n);
}
