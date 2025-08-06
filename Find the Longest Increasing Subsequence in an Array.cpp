#include <iostream>
#include <vector>
using namespace std;

int longestIncreasingSubsequence(int arr[], int n) {
    vector<int> dp(n, 1);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    int maxLen = 0;
    for (int i = 0; i < n; i++)
        maxLen = max(maxLen, dp[i]);
    return maxLen;
}

int main() {
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of longest increasing subsequence: " << longestIncreasingSubsequence(arr, n);
    return 0;
}
