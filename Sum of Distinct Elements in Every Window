#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;
    vector<int> a(N);
    for (auto &x : a) cin >> x;

    unordered_map<int,int> freq;
    long long distinctSum = 0;

    for (int i = 0; i < K; i++) {
        if (freq[a[i]] == 0) distinctSum += a[i];
        freq[a[i]]++;
    }

    cout << distinctSum;

    for (int i = K; i < N; i++) {
        int out = a[i-K];
        int in = a[i];

        freq[out]--;
        if (freq[out] == 0) distinctSum -= out;

        if (freq[in] == 0) distinctSum += in;
        freq[in]++;

        cout << " " << distinctSum;
    }
}
