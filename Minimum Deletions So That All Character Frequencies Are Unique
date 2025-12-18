#include <bits/stdc++.h>
using namespace std;

int minDeletions(string s) {
    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'a']++;

    unordered_set<int> used;
    int deletions = 0;

    for (int f : freq) {
        while (f > 0 && used.count(f)) {
            f--;
            deletions++;
        }
        if (f > 0) used.insert(f);
    }
    return deletions;
}

int main() {
    string s = "aaabbbcc";
    cout << minDeletions(s);
    return 0;
}
