#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int u,v,w;
};

struct DSU {
    vector<int> parent, rank;
    DSU(int n){ parent.resize(n); rank.assign(n,0);
        for(int i=0;i<n;i++) parent[i]=i;
    }
    int find(int x){
        if(parent[x]==x) return x;
        return parent[x]=find(parent[x]);
    }
    bool unite(int a,int b){
        a=find(a); b=find(b);
        if(a==b) return false;
        if(rank[a]<rank[b]) swap(a,b);
        parent[b]=a;
        if(rank[a]==rank[b]) rank[a]++;
        return true;
    }
};

int main(){
    int n,e;
    cout<<"Enter vertices and edges: ";
    cin>>n>>e;
    vector<Edge> edges(e);
    cout<<"Enter edges (u v w):\n";
    for(int i=0;i<e;i++) cin>>edges[i].u>>edges[i].v>>edges[i].w;

    sort(edges.begin(),edges.end(),[](Edge a,Edge b){return a.w<b.w;});
    DSU dsu(n);
    int total=0;
    cout<<"Edges in MST:\n";
    for(auto &ed:edges){
        if(dsu.unite(ed.u,ed.v)){
            cout<<ed.u<<" - "<<ed.v<<" : "<<ed.w<<endl;
            total+=ed.w;
        }
    }
    cout<<"Total Weight of MST: "<<total;
}
