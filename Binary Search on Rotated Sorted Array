#include <iostream>
#include <vector>
using namespace std;

int searchRotated(vector<int>& a,int key){
    int l=0,r=a.size()-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==key) return mid;
        if(a[l]<=a[mid]){
            if(key>=a[l] && key<a[mid]) r=mid-1;
            else l=mid+1;
        }else{
            if(key>a[mid] && key<=a[r]) l=mid+1;
            else r=mid-1;
        }
    }
    return -1;
}

int main(){
    int n,key;
    cout<<"Enter size: "; cin>>n;
    vector<int> a(n);
    cout<<"Enter rotated sorted array:\n";
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Enter key: "; cin>>key;
    int pos=searchRotated(a,key);
    if(pos!=-1) cout<<"Found at index "<<pos;
    else cout<<"Not found";
}
