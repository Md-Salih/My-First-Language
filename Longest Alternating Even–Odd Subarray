#include <bits/stdc++.h>
using namespace std;

int longestAlternatingEvenOdd(vector<int>& arr) {
    int best = 1, curr = 1;

    for (int i = 1; i < arr.size(); i++) {
        if ((arr[i] % 2) != (arr[i-1] % 2)) {
            curr++;
        } else {
            curr = 1;
        }
        best = max(best, curr);
    }

    return best;
}

int main() {
    vector<int> arr = {5, 10, 20, 6, 3, 8};
    cout << longestAlternatingEvenOdd(arr);
    return 0;
}
