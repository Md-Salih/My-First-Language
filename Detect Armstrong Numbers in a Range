#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int temp=n, sum=0;
    while(temp){
        int d=temp%10;
        sum+=pow(d,3);
        temp/=10;
    }
    return sum==n;
}

int main(){
    int l,r;
    cout<<"Enter range (l r): ";
    cin>>l>>r;
    cout<<"Armstrong numbers between "<<l<<" and "<<r<<": ";
    for(int i=l;i<=r;i++)
        if(isArmstrong(i)) cout<<i<<" ";
}
