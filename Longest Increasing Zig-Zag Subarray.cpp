#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<long long> a(N);
    for (auto &x : a) cin >> x;

    if (N == 1) {
        cout << 1;
        return 0;
    }

    int ans = 1, curr = 1;
    int dir = 0; // 1 = up, -1 = down

    for (int i = 1; i < N; i++) {
        if (a[i] > a[i-1]) {
            if (dir != 1) curr++;
            else curr = 2;
            dir = 1;
        } else if (a[i] < a[i-1]) {
            if (dir != -1) curr++;
            else curr = 2;
            dir = -1;
        } else {
            curr = 1;
            dir = 0;
        }
        ans = max(ans, curr);
    }

    cout << ans;
    return 0;
}
