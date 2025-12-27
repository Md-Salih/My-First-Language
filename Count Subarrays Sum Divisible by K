#include <bits/stdc++.h>
using namespace std;

int subarraysDivByK(vector<int>& nums, int k) {
    unordered_map<int,int> freq;
    freq[0] = 1;
    
    int sum = 0, ans = 0;
    
    for(int x : nums){
        sum += x;
        int mod = (sum % k + k) % k;
        ans += freq[mod];
        freq[mod]++;
    }
    return ans;
}

int main(){
    vector<int> nums = {4,5,0,-2,-3,1};
    int k = 5;
    cout << subarraysDivByK(nums,k);
}
