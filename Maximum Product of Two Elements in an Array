class Solution {
public:
    int maxProduct(vector<int>& nums) {
        nth_element(nums.begin(), nums.begin()+1, nums.end(), greater<int>());
        return (nums[0]-1)*(nums[1]-1);
    }
};
