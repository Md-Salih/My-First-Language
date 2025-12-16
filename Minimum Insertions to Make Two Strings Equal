#include <bits/stdc++.h>
using namespace std;

int minInsertionsToEqual(string a, string b) {
    int n = a.size(), m = b.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i-1] == b[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    int lcs = dp[n][m];
    return (n - lcs) + (m - lcs);
}

int main() {
    string a = "sea", b = "eat";
    cout << minInsertionsToEqual(a, b);
    return 0;
}
