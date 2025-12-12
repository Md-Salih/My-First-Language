#include <bits/stdc++.h>
using namespace std;

int minimumEqualDistance(vector<int>& arr) {
    unordered_map<int,int> lastIndex;
    int best = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (lastIndex.count(arr[i])) {
            best = min(best, i - lastIndex[arr[i]]);
        }
        lastIndex[arr[i]] = i;
    }

    return (best == INT_MAX) ? -1 : best;
}

int main() {
    vector<int> arr = {7, 1, 3, 4, 1, 7};
    cout << minimumEqualDistance(arr);
    return 0;
}
