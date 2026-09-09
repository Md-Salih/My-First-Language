class Solution {
public:
    int64_t countCommas(auto& n) {
        int64_t count = 0;
        for (int64_t p = 1000; p <= n; p *= 1000)
            count += n - p + 1;

        return count;
    }
};
