#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
const int LOG = 20;

vector<int> adj[N];
int up[N][LOG], depth[N];
long long val[N], pathSum[N];

int n;

void dfs(int v, int p){
    up[v][0] = p;
    for(int i = 1; i < LOG; i++)
        up[v][i] = up[ up[v][i-1] ][i-1];

    for(int to : adj[v]){
        if(to == p) continue;
        depth[to] = depth[v] + 1;
        pathSum[to] = pathSum[v] + val[to];
        dfs(to, v);
    }
}

int lca(int a, int b){
    if(depth[a] < depth[b]) swap(a,b);

    int diff = depth[a] - depth[b];
    for(int i = 0; i < LOG; i++)
        if(diff & (1<<i))
            a = up[a][i];

    if(a == b) return a;

    for(int i = LOG-1; i >= 0; i--){
        if(up[a][i] != up[b][i]){
            a = up[a][i];
            b = up[b][i];
        }
    }
    return up[a][0];
}

long long path_query(int a, int b){
    int c = lca(a,b);
    return pathSum[a] + pathSum[b] - 2*pathSum[c] + val[c];
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> val[i];

    for(int i = 1; i < n; i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    depth[1] = 0;
    pathSum[1] = val[1];
    dfs(1,1);

    int q;
    cin >> q;
    while(q--){
        int a,b;
        cin >> a >> b;
        cout << path_query(a,b) << "\n";
    }
}
