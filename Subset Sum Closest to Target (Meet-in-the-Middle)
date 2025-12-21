#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {5, -2, 7, 3};
    int T = 6;
    int n = arr.size();

    vector<int> left, right;

    for (int mask = 0; mask < (1 << (n/2)); mask++) {
        int sum = 0;
        for (int i = 0; i < n/2; i++)
            if (mask & (1 << i)) sum += arr[i];
        left.push_back(sum);
    }

    for (int mask = 0; mask < (1 << (n - n/2)); mask++) {
        int sum = 0;
        for (int i = 0; i < n - n/2; i++)
            if (mask & (1 << i)) sum += arr[i + n/2];
        right.push_back(sum);
    }

    sort(right.begin(), right.end());

    int best = INT_MAX;
    for (int x : left) {
        int need = T - x;
        auto it = lower_bound(right.begin(), right.end(), need);
        if (it != right.end())
            best = min(best, abs(T - (x + *it)));
        if (it != right.begin()) {
            --it;
            best = min(best, abs(T - (x + *it)));
        }
    }

    cout << T - best;
    return 0;
}
