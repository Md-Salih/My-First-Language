#include <bits/stdc++.h>
using namespace std;

pair<char,int> longestRun(const string& s) {
    char bestChar = s[0];
    int bestLen = 1, curr = 1;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1]) curr++;
        else curr = 1;

        if (curr > bestLen) {
            bestLen = curr;
            bestChar = s[i];
        }
    }

    return {bestChar, bestLen};
}

int main() {
    string s = "aaabbccccddeeeeee";

    auto res = longestRun(s);
    cout << "Character: " << res.first << "\nLength: " << res.second;
    return 0;
}
