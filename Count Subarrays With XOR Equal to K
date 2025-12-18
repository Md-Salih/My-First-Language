#include <bits/stdc++.h>
using namespace std;

int countSubarraysXOR(vector<int>& arr, int K) {
    unordered_map<int, int> freq;
    freq[0] = 1;

    int xr = 0, count = 0;
    for (int x : arr) {
        xr ^= x;
        if (freq.count(xr ^ K))
            count += freq[xr ^ K];
        freq[xr]++;
    }
    return count;
}

int main() {
    vector<int> arr = {4, 2, 2, 6, 4};
    int K = 6;
    cout << countSubarraysXOR(arr, K);
    return 0;
}
