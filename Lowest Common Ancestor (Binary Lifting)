#include <bits/stdc++.h>
using namespace std;

static const int MAXN = 100005;
static const int LOG = 20;

vector<int> tree[MAXN];
int up[MAXN][LOG], depth[MAXN];

void dfs(int v, int p) {
    up[v][0] = p;
    for (int i = 1; i < LOG; i++)
        up[v][i] = up[up[v][i-1]][i-1];

    for (int u : tree[v]) {
        if (u == p) continue;
        depth[u] = depth[v] + 1;
        dfs(u, v);
    }
}

int lca(int a, int b) {
    if (depth[a] < depth[b]) swap(a, b);

    int diff = depth[a] - depth[b];
    for (int i = 0; i < LOG; i++)
        if (diff & (1 << i))
            a = up[a][i];

    if (a == b) return a;

    for (int i = LOG - 1; i >= 0; i--) {
        if (up[a][i] != up[b][i]) {
            a = up[a][i];
            b = up[b][i];
        }
    }
    return up[a][0];
}

int main() {
    int n = 5;
    tree[1] = {2,3};
    tree[2] = {1,4,5};
    tree[3] = {1};
    tree[4] = {2};
    tree[5] = {2};

    dfs(1, 1);

    cout << lca(4, 5);
    return 0;
}
