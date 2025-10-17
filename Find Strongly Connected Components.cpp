#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int v, vector<vector<int>>& adj, vector<bool>& vis, stack<int>& st){
    vis[v]=true;
    for(int u:adj[v]) if(!vis[u]) dfs(u,adj,vis,st);
    st.push(v);
}

void revDfs(int v, vector<vector<int>>& rev, vector<bool>& vis){
    cout<<v<<" ";
    vis[v]=true;
    for(int u:rev[v]) if(!vis[u]) revDfs(u,rev,vis);
}

int main(){
    int n,e;
    cout<<"Enter vertices and edges: ";
    cin>>n>>e;
    vector<vector<int>> adj(n), rev(n);
    cout<<"Enter edges (u v):\n";
    for(int i=0;i<e;i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        rev[v].push_back(u);
    }

    vector<bool> vis(n,false);
    stack<int> st;
    for(int i=0;i<n;i++)
        if(!vis[i]) dfs(i,adj,vis,st);

    fill(vis.begin(), vis.end(), false);
    cout<<"\nStrongly Connected Components:\n";
    while(!st.empty()){
        int v=st.top(); st.pop();
        if(!vis[v]){
            revDfs(v,rev,vis);
            cout<<endl;
        }
    }
}
