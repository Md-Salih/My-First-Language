#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cout<<"Enter n (array has n-1 elements from 1..n): ";
    cin>>n;
    vector<int> arr(n-1);
    cout<<"Enter elements:\n";
    for(int i=0;i<n-1;i++) cin>>arr[i];

    int xor1=0, xor2=0;
    for(int i=1;i<=n;i++) xor1^=i;
    for(int x:arr) xor2^=x;

    cout<<"Missing number: "<<(xor1^xor2);
}
