#include <bits/stdc++.h>
using namespace std;

int countWays(int T, vector<int>& moves) {
    vector<int> dp(T + 1, 0);
    dp[0] = 1;

    for (int m : moves)
        for (int i = m; i <= T; i++)
            dp[i] += dp[i - m];

    return dp[T];
}

int main() {
    int T = 20;
    vector<int> moves = {3, 5, 10};

    cout << countWays(T, moves);
    return 0;
}
