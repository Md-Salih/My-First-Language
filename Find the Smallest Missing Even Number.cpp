#include <bits/stdc++.h>
using namespace std;

int smallestMissingEven(vector<int>& arr) {
    unordered_set<int> st(arr.begin(), arr.end());
    int even = 2;

    while (true) {
        if (!st.count(even)) return even;
        even += 2;
    }
}

int main() {
    vector<int> arr = {2, 4, 8, 6, 10};
    cout << smallestMissingEven(arr);
    return 0;
}
