#include <bits/stdc++.h>
using namespace std;

struct RollbackDSU {
    vector<int> parent, sz;
    stack<pair<int,int>> history;
    int comps;

    RollbackDSU(int n){
        parent.resize(n);
        sz.assign(n,1);
        iota(parent.begin(), parent.end(), 0);
        comps = n;
    }

    int find(int x){
        while(x != parent[x]) x = parent[x];
        return x;
    }

    bool unite(int a, int b){
        a = find(a);
        b = find(b);
        if(a == b){
            history.push({-1,-1});
            return false;
        }
        if(sz[a] < sz[b]) swap(a,b);

        parent[b] = a;
        sz[a] += sz[b];
        comps--;

        history.push({a,b});
        return true;
    }

    void rollback(){
        auto [a,b] = history.top();
        history.pop();

        if(a == -1) return;

        parent[b] = b;
        sz[a] -= sz[b];
        comps++;
    }

    bool connected(int a, int b){
        return find(a) == find(b);
    }
};

int main(){
    RollbackDSU d(5);

    d.unite(1,2);
    d.unite(2,3);
    cout << d.connected(1,3) << endl;

    d.rollback();
    cout << d.connected(1,3) << endl;
}
