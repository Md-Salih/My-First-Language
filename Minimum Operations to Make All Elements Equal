#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n);
    for(long long &x : arr) cin >> x;

    sort(arr.begin(), arr.end());

    long long median = arr[n/2];
    long long ops = 0;

    for(long long x : arr)
        ops += llabs(x - median);

    cout << ops;
    return 0;
}
