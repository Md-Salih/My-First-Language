#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPal(string s,int l,int r){
    while(l<r) if(s[l++]!=s[r--]) return false;
    return true;
}

void solve(string s,int i,vector<string>& curr,vector<vector<string>>& ans){
    if(i==s.size()){
        ans.push_back(curr);
        return;
    }
    for(int j=i;j<s.size();j++){
        if(isPal(s,i,j)){
            curr.push_back(s.substr(i,j-i+1));
            solve(s,j+1,curr,ans);
            curr.pop_back();
        }
    }
}

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    vector<vector<string>> ans;
    vector<string> curr;
    solve(s,0,curr,ans);

    cout<<"\nPalindrome Partitions:\n";
    for(auto &p:ans){
        for(auto &x:p) cout<<x<<" ";
        cout<<endl;
    }
}
