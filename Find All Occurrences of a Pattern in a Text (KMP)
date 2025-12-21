#include <bits/stdc++.h>
using namespace std;

vector<int> buildLPS(string p) {
    int n = p.size();
    vector<int> lps(n, 0);
    for (int i = 1, len = 0; i < n; ) {
        if (p[i] == p[len]) {
            lps[i++] = ++len;
        } else if (len) {
            len = lps[len - 1];
        } else {
            i++;
        }
    }
    return lps;
}

int main() {
    string text = "ababcababc";
    string pat = "ababc";

    vector<int> lps = buildLPS(pat);
    vector<int> res;

    for (int i = 0, j = 0; i < text.size(); ) {
        if (text[i] == pat[j]) {
            i++; j++;
        }
        if (j == pat.size()) {
            res.push_back(i - j);
            j = lps[j - 1];
        } else if (i < text.size() && text[i] != pat[j]) {
            if (j) j = lps[j - 1];
            else i++;
        }
    }

    for (int idx : res) cout << idx << " ";
    return 0;
}
