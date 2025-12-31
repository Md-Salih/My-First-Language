#include <bits/stdc++.h>
using namespace std;

struct Trie{
    Trie* child[2];
    int cnt;
    Trie(){
        child[0]=child[1]=NULL;
        cnt=0;
    }
};

void insert(Trie* root,int x){
    for(int i=31;i>=0;i--){
        int bit=(x>>i)&1;
        if(!root->child[bit]) root->child[bit]=new Trie();
        root=root->child[bit];
        root->cnt++;
    }
}

int query(Trie* root,int x,int k){
    int ans=0;
    for(int i=31;i>=0;i--){
        if(!root) return ans;
        int xb=(x>>i)&1;
        int kb=(k>>i)&1;

        if(kb==1){
            if(root->child[xb]) ans+=root->child[xb]->cnt;
            root=root->child[xb^1];
        }else{
            root=root->child[xb];
        }
    }
    return ans;
}

int main(){
    vector<int> a = {4,1,3,2};
    int k = 4;

    Trie* root=new Trie();
    insert(root,0);
    int xr=0,ans=0;

    for(int x:a){
        xr ^= x;
        ans += query(root,xr,k);
        insert(root,xr);
    }
    cout<<ans;
}
