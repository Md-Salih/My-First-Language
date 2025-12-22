#include <bits/stdc++.h>
using namespace std;

bool canShip(vector<int>& w, int D, int cap) {
    int days = 1, load = 0;
    for (int x : w) {
        if (load + x > cap) {
            days++;
            load = 0;
        }
        load += x;
    }
    return days <= D;
}

int main() {
    vector<int> w = {1,2,3,4,5,6,7,8,9,10};
    int D = 5;

    int lo = *max_element(w.begin(), w.end());
    int hi = accumulate(w.begin(), w.end(), 0);
    int ans = hi;

    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (canShip(w, D, mid)) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    cout << ans;
    return 0;
}
