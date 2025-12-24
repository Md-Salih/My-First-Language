#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    vector<vector<int>> adj = {
        {},        // dummy (1-indexed)
        {2,3},
        {3},
        {4},
        {}
    };

    vector<int> indegree(n+1, 0);

    for(int i = 1; i <= n; i++)
        for(int v : adj[i])
            indegree[v]++;

    queue<int> q;
    for(int i = 1; i <= n; i++)
        if(indegree[i] == 0)
            q.push(i);

    vector<int> topo;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        topo.push_back(node);

        for(int nxt : adj[node]) {
            indegree[nxt]--;
            if(indegree[nxt] == 0)
                q.push(nxt);
        }
    }

    if(topo.size() != n) {
        cout << "Cycle Detected";
    }
    else {
        for(int x : topo) cout << x << " ";
    }

    return 0;
}
