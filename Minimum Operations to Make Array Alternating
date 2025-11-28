#include <bits/stdc++.h>
using namespace std;

long long solve(vector<long long> a, bool startLess) {
    long long ops = 0;
    for (int i = 0; i + 1 < a.size(); i++) {
        bool shouldLess = (i % 2 == 0 ? startLess : !startLess);
        if (shouldLess) {
            if (a[i] >= a[i+1]) {
                long long diff = a[i] - a[i+1] + 1;
                ops += diff;
                a[i] -= diff;
            }
        } else {
            if (a[i] <= a[i+1]) {
                long long diff = a[i+1] - a[i] + 1;
                ops += diff;
                a[i+1] -= diff;
            }
        }
    }
    return ops;
}

int main() {
    int N;
    cin >> N;
    vector<long long> a(N);
    for (auto &x : a) cin >> x;

    cout << min(solve(a, true), solve(a, false));
}
