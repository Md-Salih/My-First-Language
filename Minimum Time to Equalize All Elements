#include <bits/stdc++.h>
using namespace std;

int minOpsToEqualize(vector<int>& arr) {
    int maxVal = *max_element(arr.begin(), arr.end());
    int ops = 0;

    for (int x : arr)
        ops += (maxVal - x);

    return ops;
}

int main() {
    vector<int> arr = {5, 1, 3, 5};

    cout << minOpsToEqualize(arr);
    return 0;
}
