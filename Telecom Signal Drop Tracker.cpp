#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> s(n);

    for(int i=0;i<n;i++) cin>>s[i];

    for(int i=1;i<n;i++){
        if(s[i] < s[i-1] - 15){
            cout<<"Drop at position "<<i+1<<"\n";
        }
    }
}
