#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> cost = {
        {9,2,7},
        {6,4,3},
        {5,8,1}
    };

    int n = cost.size();
    int FULL = (1 << n);
    vector<int> dp(FULL, INT_MAX);
    dp[0] = 0;

    for (int mask = 0; mask < FULL; mask++) {
        int worker = __builtin_popcount(mask);
        for (int job = 0; job < n; job++) {
            if (!(mask & (1 << job))) {
                dp[mask | (1 << job)] =
                    min(dp[mask | (1 << job)],
                        dp[mask] + cost[worker][job]);
            }
        }
    }

    cout << dp[FULL - 1];
    return 0;
}
