#include <bits/stdc++.h>
using namespace std;

int maximumProduct(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    
    int n = nums.size();
    
    // Option 1: product of the largest three numbers
    int option1 = nums[n-1] * nums[n-2] * nums[n-3];
    
    // Option 2: product of two smallest (possibly negative) and the largest
    int option2 = nums[0] * nums[1] * nums[n-1];
    
    return max(option1, option2);
}

int main() {
    vector<int> nums = {-10, -3, 5, 6, -20};

    cout << maximumProduct(nums);
    return 0;
}
