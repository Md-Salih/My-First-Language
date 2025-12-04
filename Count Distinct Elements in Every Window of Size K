#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int &x : arr) cin >> x;

    unordered_map<int,int> freq;
    vector<int> result;

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;

        if(i >= k) {
            freq[arr[i-k]]--;
            if(freq[arr[i-k]] == 0)
                freq.erase(arr[i-k]);
        }

        if(i >= k-1)
            result.push_back(freq.size());
    }

    for(int x : result) cout << x << " ";
    return 0;
}
