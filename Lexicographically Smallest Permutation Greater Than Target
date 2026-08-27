class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int cnt[26] = {};

        for (char ch : s) {
            cnt[ch - 'a']++;
        }

        for (char ch : target) {
            cnt[ch - 'a']--;
        }

        for (int i = target.size() - 1; i >= 0; i--) {
            int cur = target[i] - 'a';
            cnt[cur]++;

            bool ok = true;
            for (int c = 0; c < 26; c++) {
                if (cnt[c] < 0) {
                    ok = false;
                    break;
                }
            }

            if (!ok) continue;

            int next = -1;
            for (int c = cur + 1; c < 26; c++) {
                if (cnt[c] > 0) {
                    next = c;
                    break;
                }
            }

            if (next == -1) continue;

            cnt[next]--;

            string ans = target.substr(0, i);
            ans += char('a' + next);

            for (int c = 0; c < 26; c++) {
                ans.append(cnt[c], char('a' + c));
            }

            return ans;
        }

        return "";
    }
};
