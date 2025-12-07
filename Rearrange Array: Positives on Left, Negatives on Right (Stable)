#include <bits/stdc++.h>
using namespace std;

vector<int> stableRearrange(vector<int> arr) {
    vector<int> pos, neg;

    for (int x : arr) {
        if (x >= 0) pos.push_back(x);
        else neg.push_back(x);
    }

    pos.insert(pos.end(), neg.begin(), neg.end());
    return pos;
}

int main() {
    vector<int> arr = {3, -1, 4, -2, 0, 9};
    vector<int> ans = stableRearrange(arr);

    for (int x : ans) cout << x << " ";
    return 0;
}
