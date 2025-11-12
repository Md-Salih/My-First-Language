#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int trap(vector<int>& h){
    int n=h.size();
    int l=0,r=n-1;
    int leftMax=0,rightMax=0,water=0;

    while(l<r){
        if(h[l]<=h[r]){
            if(h[l]>=leftMax) leftMax=h[l];
            else water+=leftMax-h[l];
            l++;
        }else{
            if(h[r]>=rightMax) rightMax=h[r];
            else water+=rightMax-h[r];
            r--;
        }
    }
    return water;
}

int main(){
    int n;
    cout<<"Enter number of bars: ";
    cin>>n;
    vector<int> h(n);
    for(int i=0;i<n;i++) cin>>h[i];
    cout<<"Trapped water: "<<trap(h);
}
