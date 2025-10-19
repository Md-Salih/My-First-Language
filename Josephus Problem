#include <iostream>
using namespace std;

int josephus(int n,int k){
    if(n==1) return 0;
    return (josephus(n-1,k)+k)%n;
}

int main(){
    int n,k;
    cout<<"Enter n (people) and k (step): ";
    cin>>n>>k;
    cout<<"Safe position: "<<josephus(n,k)+1;
}
