#include <bits/stdc++.h>
using namespace std;

int countDistinctSubstrings(string s) {
    const long long base = 31;
    const long long mod = 1e9 + 7;

    int n = s.size();
    vector<long long> hash(n+1, 0), power(n+1, 1);

    for (int i = 0; i < n; i++) {
        hash[i+1] = (hash[i] * base + (s[i] - 'a' + 1)) % mod;
        power[i+1] = (power[i] * base) % mod;
    }

    unordered_set<long long> seen;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            long long cur =
                (hash[j+1] - hash[i] * power[j-i+1] % mod + mod) % mod;
            seen.insert(cur);
        }
    }

    return seen.size();
}

int main() {
    string s = "aba";
    cout << countDistinctSubstrings(s);
    return 0;
}
