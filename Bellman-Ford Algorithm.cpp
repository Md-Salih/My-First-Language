#include <iostream>
#include <vector>
using namespace std;

struct Edge {
    int u,v,w;
};

void bellmanFord(int n, int src, vector<Edge>& edges) {
    vector<int> dist(n, 1e9);
    dist[src]=0;

    for (int i=1; i<n; i++) {
        for (auto e : edges) {
            if (dist[e.u] != 1e9 && dist[e.u] + e.w < dist[e.v]) {
                dist[e.v] = dist[e.u] + e.w;
            }
        }
    }

    // check negative cycle
    for (auto e : edges) {
        if (dist[e.u] != 1e9 && dist[e.u] + e.w < dist[e.v]) {
            cout << "Graph contains negative weight cycle!\n";
            return;
        }
    }

    cout << "Shortest distances from source " << src << ":\n";
    for (int i=0;i<n;i++)
        cout << "Node " << i << " : " << dist[i] << endl;
}

int main() {
    int n=5;
    vector<Edge> edges = {
        {0,1,-1}, {0,2,4}, {1,2,3}, {1,3,2}, {1,4,2}, 
        {3,2,5}, {3,1,1}, {4,3,-3}
    };

    bellmanFord(n,0,edges);
}
