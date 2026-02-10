class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = (int)nums.size();

        vector<int> balance(n, 0);  // first-occurrence markers for current l
        unordered_map<int, int> first;  // val -> first occurence idx for current l

        int result = 0;

        for (int l = n - 1; l >= 0; --l) {
            int x = nums[l];

            // If x already had a first occurrence to the right, remove that old marker.
            auto it = first.find(x);
            if (it != first.end())
                balance[it->second] = 0;

            // Now x becomes first occurrence at l.
            first[x] = l;
            balance[l] = ((x & 1) == 0) ? 1 : -1;

            // Find rightmost r >= l such that sum(balance[l..r]) == 0
            int s = 0;
            for (int r = l; r < n; ++r) {
                s += balance[r];
                if (s == 0)
                    result = max(result, r - l + 1);
            }
        }

        return result;
    }
};
