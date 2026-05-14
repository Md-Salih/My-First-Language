class Solution {
public:
    bool isGood(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());

        // size must be mx + 1
        if(nums.size() != mx + 1)
            return false;

        vector<int> freq(mx + 1, 0);

        for(int x : nums) {
            // invalid number
            if(x < 1 || x > mx)
                return false;
            freq[x]++;
        }

        // 1 to mx-1 should appear once
        for(int i = 1; i < mx; i++) {
            if(freq[i] != 1)
                return false;
        }
        // mx should appear twice
        return freq[mx] == 2;
    }
};
