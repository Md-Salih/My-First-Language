#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<int> leaders;
    int maxRight = arr[n-1];
    leaders.push_back(maxRight);

    for(int i=n-2;i>=0;i--){
        if(arr[i]>=maxRight){
            maxRight = arr[i];
            leaders.push_back(arr[i]);
        }
    }

    cout<<"Leaders in array: ";
    for(int i=leaders.size()-1;i>=0;i--) cout<<leaders[i]<<" ";
}
