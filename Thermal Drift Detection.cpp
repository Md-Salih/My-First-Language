#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> temp(n);

    for(int i=0;i<n;i++) cin>>temp[i];

    for(int i=1;i<n;i++){
        if(temp[i] - temp[i-1] >= 12){
            cout<<"BRAKE OVERHEAT at minute "<<i+1<<"\n";
        }
    }
}
