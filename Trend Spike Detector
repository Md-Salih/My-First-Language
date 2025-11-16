#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    for(int i=5;i<n;i++){
        int prevSum = a[i-5]+a[i-4]+a[i-3]+a[i-2]+a[i-1];
        int currSum = prevSum - a[i-5] + a[i];
        if((currSum - prevSum) >= prevSum*0.4){
            cout << "Trend spike at index " << i << endl;
        }
        prevSum = currSum;
    }
}
