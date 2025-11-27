#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
int bestDepth = 1;

int dfs(int u, int parent) {
    vector<int> depths;
    for (int v : g[u]) {
        if (v == parent) continue;
        depths.push_back(dfs(v, u));
    }
    if (depths.empty()) return 1;

    sort(depths.begin(), depths.end(), greater<int>());
    int maxDepth = depths[0] + 1;

    bestDepth = max(bestDepth, maxDepth);
    return maxDepth;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    g.resize(N+1);

    for (int i = 0; i < N-1; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1, -1);
    cout << bestDepth;
    return 0;
}
