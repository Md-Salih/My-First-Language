class Solution {
public:
    int stoneGameVIII(vector<int>& stones) {
        int n = stones.size();

        vector<int> prefix = stones;

        // Build prefix sums
        for (int i = 1; i < n; i++) {
            prefix[i] += prefix[i - 1];
        }

        // If Alice takes all stones,
        // the game ends immediately.
        int best = prefix[n - 1];

        // Try every earlier valid prefix
        for (int i = n - 2; i >= 1; i--) {
            best = max(best, prefix[i] - best);
        }

        return best;
    }
};
