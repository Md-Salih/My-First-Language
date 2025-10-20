#include <iostream>
#include <string>
using namespace std;

void generate(string cur,int open,int close,int n){
    if(cur.size()==2*n){
        cout<<cur<<endl; return;
    }
    if(open<n) generate(cur+'(',open+1,close,n);
    if(close<open) generate(cur+')',open,close+1,n);
}

int main(){
    int n; cout<<"Enter n pairs of parentheses: ";
    cin>>n;
    cout<<"All balanced combinations:\n";
    generate("",0,0,n);
}
