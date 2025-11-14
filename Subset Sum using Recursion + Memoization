#include <iostream>
#include <vector>
using namespace std;

bool subsetSum(vector<int>& arr,int n,int sum,vector<vector<int>>& dp){
    if(sum==0) return true;
    if(n==0) return false;
    if(dp[n][sum]!=-1) return dp[n][sum];
    if(arr[n-1]<=sum)
        return dp[n][sum]=subsetSum(arr,n-1,sum-arr[n-1],dp)||subsetSum(arr,n-1,sum,dp);
    return dp[n][sum]=subsetSum(arr,n-1,sum,dp);
}

int main(){
    int n,sum;
    cout<<"Enter number of elements and sum: ";
    cin>>n>>sum;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
    cout<<(subsetSum(arr,n,sum,dp)?"Subset exists":"No subset found");
}
