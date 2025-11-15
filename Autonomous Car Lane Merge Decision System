#include <iostream>
#include <vector>
using namespace std;

bool mergePossible(vector<int>& pos, vector<int>& speed, int myPos, int mySpeed){
    for(int i=0;i<pos.size();i++){
        for(int t=1;t<=10;t++){
            int other = pos[i] + speed[i]*t;
            int mine  = myPos + mySpeed*t;
            if(abs(other - mine) <= 5) return false; // 5m safety gap
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector<int> pos(n), speed(n);
    for(int i=0;i<n;i++) cin>>pos[i]>>speed[i];

    int myPos, mySpeed;
    cin>>myPos>>mySpeed;

    cout<<(mergePossible(pos, speed, myPos, mySpeed) ? 
           "SAFE TO MERGE" : "NOT SAFE");
}
