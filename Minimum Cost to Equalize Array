#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N, A, B;
    cin >> N >> A >> B;
    vector<long long> v(N);
    for (auto &x : v) cin >> x;

    sort(v.begin(), v.end());

    long long ans = LLONG_MAX;

    // Try all candidates from median region
    for (long long target : {v[N/2], v[0], v.back()}) {
        long long cost = 0;
        for (long long x : v) {
            if (x < target) cost += (target - x) * A;
            else cost += (x - target) * B;
        }
        ans = min(ans, cost);
    }

    cout << ans;
    return 0;
}
