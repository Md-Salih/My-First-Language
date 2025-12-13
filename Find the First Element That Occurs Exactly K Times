#include <bits/stdc++.h>
using namespace std;

int firstKFrequency(vector<int>& arr, int k) {
    unordered_map<int,int> freq;
    for (int x : arr) freq[x]++;

    for (int x : arr)
        if (freq[x] == k)
            return x;

    return -1;
}

int main() {
    vector<int> arr = {4, 1, 2, 2, 1, 1, 3};
    int k = 2;
    cout << firstKFrequency(arr, k);
    return 0;
}
