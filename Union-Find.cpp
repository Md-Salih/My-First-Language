#include <iostream>
#include <vector>
using namespace std;

class DSU {
    vector<int> parent, rank;
public:
    DSU(int n) {
        parent.resize(n);
        rank.resize(n,0);
        for(int i=0;i<n;i++) parent[i]=i;
    }

    int find(int x){
        if(parent[x]==x) return x;
        return parent[x]=find(parent[x]);
    }

    void unite(int a, int b){
        int pa=find(a), pb=find(b);
        if(pa!=pb){
            if(rank[pa]<rank[pb]) parent[pa]=pb;
            else if(rank[pb]<rank[pa]) parent[pb]=pa;
            else { parent[pb]=pa; rank[pa]++; }
        }
    }
};

int main(){
    int n,m;
    cout<<"Enter number of nodes and edges: ";
    cin>>n>>m;
    DSU dsu(n);
    cout<<"Enter edges (u v):\n";
    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        dsu.unite(u,v);
    }

    cout<<"Connected Components:\n";
    for(int i=0;i<n;i++)
        cout<<"Node "<<i<<" -> Parent "<<dsu.find(i)<<endl;
}
