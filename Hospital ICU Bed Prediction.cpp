#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n), pred(n);

    for(int i=0;i<n;i++) cin >> a[i];

    for(int i=0;i<n;i++){
        int sum = a[i], count = 1;
        if(i>0) sum += a[i-1], count++;
        if(i<n-1) sum += a[i+1], count++;
        pred[i] = sum / count;
    }

    for(int x: pred) cout << x << " ";
}
