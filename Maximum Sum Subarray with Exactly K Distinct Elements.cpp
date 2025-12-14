#include <bits/stdc++.h>
using namespace std;

long long maxSumWithKDistinct(vector<int>& arr, int K) {
    unordered_map<int,int> freq;
    int left = 0;
    long long sum = 0, best = 0;

    for (int right = 0; right < arr.size(); right++) {
        sum += arr[right];
        freq[arr[right]]++;

        while (freq.size() > K) {
            freq[arr[left]]--;
            sum -= arr[left];
            if (freq[arr[left]] == 0)
                freq.erase(arr[left]);
            left++;
        }

        if (freq.size() == K)
            best = max(best, sum);
    }

    return best;
}

int main() {
    vector<int> arr = {1, 2, 1, 2, 3};
    int K = 2;
    cout << maxSumWithKDistinct(arr, K);
    return 0;
}
