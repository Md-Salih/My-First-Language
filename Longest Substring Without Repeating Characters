#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    vector<int> last(256, -1);
    int start = 0, ans = 0;

    for(int i = 0; i < s.size(); i++) {
        if(last[s[i]] >= start)
            start = last[s[i]] + 1;
        last[s[i]] = i;
        ans = max(ans, i - start + 1);
    }
    return ans;
}

int main() {
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s);
}
