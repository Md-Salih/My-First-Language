#include <iostream>
#include <vector>
using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj;
    void dfsUtil(int v, vector<bool> &visited) {
        visited[v] = true;
        cout << v << " ";
        for (int u : adj[v]) {
            if (!visited[u]) dfsUtil(u, visited);
        }
    }
public:
    Graph(int v) {
        V = v;
        adj.resize(V);
    }
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void DFS(int start) {
        vector<bool> visited(V, false);
        cout << "DFS starting from " << start << ": ";
        dfsUtil(start, visited);
    }
};

int main() {
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(1,4);

    g.DFS(0);
}
