#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    vector<long long> a(N), b;
    for (auto &x : a) cin >> x;

    b = a;
    b.insert(b.end(), a.begin(), a.end()); // double array for rotation

    vector<long long> pre(2*N+1, 0);
    for (int i = 0; i < 2*N; i++)
        pre[i+1] = pre[i] + b[i];

    int half = N / 2;
    int countBalanced = 0;

    for (int start = 0; start < N; start++) {
        long long sum1 = pre[start + half] - pre[start];
        long long sum2 = pre[start + N] - pre[start + N - half];
        if (sum1 == sum2)
            countBalanced++;
    }

    cout << countBalanced;
    return 0;
}
