#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> h(n);

    for(int i=0;i<n;i++) cin>>h[i];

    int maxLeft = 0;

    for(int i=0;i<n;i++){
        if(h[i] > maxLeft){
            cout << "Building " << i+1 << " gets sun\n";
            maxLeft = h[i];
        } else {
            cout << "Building " << i+1 << " is in shadow\n";
        }
    }
}
