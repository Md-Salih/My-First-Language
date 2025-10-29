#include <iostream>
#include <vector>
using namespace std;

long long merge(vector<int>& arr,int l,int m,int r){
    vector<int> temp;
    int i=l,j=m+1;
    long long cnt=0;
    while(i<=m && j<=r){
        if(arr[i]<=arr[j]) temp.push_back(arr[i++]);
        else{
            temp.push_back(arr[j++]);
            cnt += (m - i + 1);
        }
    }
    while(i<=m) temp.push_back(arr[i++]);
    while(j<=r) temp.push_back(arr[j++]);
    for(int k=l;k<=r;k++) arr[k]=temp[k-l];
    return cnt;
}

long long mergeSort(vector<int>& arr,int l,int r){
    long long cnt=0;
    if(l<r){
        int m=(l+r)/2;
        cnt+=mergeSort(arr,l,m);
        cnt+=mergeSort(arr,m+1,r);
        cnt+=merge(arr,l,m,r);
    }
    return cnt;
}

int main(){
    int n; cout<<"Enter size: "; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Total inversions: "<<mergeSort(arr,0,n-1);
}
