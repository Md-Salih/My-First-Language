#include <bits/stdc++.h>
using namespace std;

bool canFinish(int n, vector<pair<int,int>>& prereq) {
    vector<vector<int>> graph(n);
    vector<int> indeg(n, 0);

    for (auto &p : prereq) {
        graph[p.second].push_back(p.first);
        indeg[p.first]++;
    }

    queue<int> q;
    for (int i = 0; i < n; i++)
        if (indeg[i] == 0)
            q.push(i);

    int done = 0;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        done++;

        for (int v : graph[u]) {
            if (--indeg[v] == 0)
                q.push(v);
        }
    }

    return done == n;
}

int main() {
    int n = 4;
    vector<pair<int,int>> prereq = {{1,0},{2,1},{3,2}};
    cout << (canFinish(n, prereq) ? "YES" : "NO");
    return 0;
}
