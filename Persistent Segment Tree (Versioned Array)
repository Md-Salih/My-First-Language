#include <bits/stdc++.h>
using namespace std;

struct Node{
    long long sum;
    Node *left, *right;
    Node(long long s=0, Node* l=NULL, Node* r=NULL){
        sum = s; left = l; right = r;
    }
};

Node* build(vector<int>& arr,int l,int r){
    if(l == r) return new Node(arr[l]);
    int mid=(l+r)/2;
    Node* left=build(arr,l,mid);
    Node* right=build(arr,mid+1,r);
    return new Node(left->sum+right->sum,left,right);
}

Node* update(Node* prev,int l,int r,int idx,int val){
    if(l==r) return new Node(val);
    int mid=(l+r)/2;
    if(idx<=mid){
        Node* left=update(prev->left,l,mid,idx,val);
        return new Node(left->sum+prev->right->sum,left,prev->right);
    }else{
        Node* right=update(prev->right,mid+1,r,idx,val);
        return new Node(prev->left->sum+right->sum,prev->left,right);
    }
}

long long query(Node* root,int l,int r,int L,int R){
    if(r<L || R<l) return 0;
    if(L<=l && r<=R) return root->sum;
    int mid=(l+r)/2;
    return query(root->left,l,mid,L,R)+query(root->right,mid+1,r,L,R);
}

int main(){
    vector<int> arr = {1,2,3,4};
    int n = arr.size();
    
    vector<Node*> version;
    version.push_back(build(arr,0,n-1));

    version.push_back(update(version.back(),0,n-1,2,10)); 
    cout << query(version[1],0,n-1,1,3);
}
