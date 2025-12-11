#include <bits/stdc++.h>
using namespace std;

vector<int> prefixSumIndices(vector<int>& arr, int S) {
    vector<int> result;
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum == S) result.push_back(i);
    }
    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 3, 1};
    int S = 6;

    vector<int> ans = prefixSumIndices(arr, S);
    for (int x : ans) cout << x << " ";
    return 0;
}
