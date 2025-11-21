#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> w(n);

    for(int i=0;i<n;i++) cin>>w[i];

    for(int i=2;i<n;i++){
        if(w[i]>w[i-1] && w[i-1]>w[i-2]){
            cout<<"JAM RISK at second "<<i+1;
            return 0;
        }
    }
    cout<<"NO RISK";
}
