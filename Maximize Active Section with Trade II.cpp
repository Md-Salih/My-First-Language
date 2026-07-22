class Solution {
public:
    vector<int> maxActiveSectionsAfterTrade(string s, vector<vector<int>>& queries) {
        int n = s.length();
        int total_ones = 0;
        for (char c : s) {
            if (c == '1') total_ones++;
        }
        
        vector<int> type;
        vector<int> start;
        vector<int> end_idx;
        
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && s[j] == s[i]) {
                j++;
            }
            type.push_back(s[i] - '0');
            start.push_back(i);
            end_idx.push_back(j - 1);
            i = j;
        }
        
        int N = type.size();
        
        vector<int> pos_to_seg(n);
        for (int i = 0; i < N; i++) {
            for (int j = start[i]; j <= end_idx[i]; j++) {
                pos_to_seg[j] = i; 
            }
        }
        
        vector<int> ans(N, 0);
        for (int i = 1; i < N - 1; i++) {
            if (type[i] == 1) {
                ans[i] = (end_idx[i - 1] - start[i - 1] + 1) + (end_idx[i + 1] - start[i + 1] + 1);
            }
        }
        
        vector<int> log_table(N + 1, 0);
        for (int i = 2; i <= N; i++) {
            log_table[i] = log_table[i / 2] + 1;
        }
        
        int K = log_table[N] + 1;
        vector<vector<int>> st(K, vector<int>(N, 0));
        
        for (int i = 0; i < N; i++) {
            st[0][i] = ans[i];
        }
        
        for (int j = 1; j < K; j++) {
            for (int i = 0; i + (1 << j) <= N; i++) {
                st[j][i] = max(st[j - 1][i], st[j - 1][i + (1 << (j - 1))]);
            }
        }
        
        auto queryRMQ = [&](int L_idx, int R_idx) {
            if (L_idx > R_idx) return 0;
            int j = log_table[R_idx - L_idx + 1];
            return max(st[j][L_idx], st[j][R_idx - (1 << j) + 1]);
        };
        
        auto eval = [&](int i, int L, int R, int segL, int segR) {
            if (i <= segL || i >= segR) return 0;
            if (type[i] == 0) return 0;
            
            int left_len = 0;
            if (i - 1 == segL) left_len = max(0, end_idx[i - 1] - L + 1);
            else left_len = end_idx[i - 1] - start[i - 1] + 1;
            
            int right_len = 0;
            if (i + 1 == segR) right_len = max(0, R - start[i + 1] + 1);
            else right_len = end_idx[i + 1] - start[i + 1] + 1;
            
            return left_len + right_len;
        };
        
        vector<int> res;
        
        for (const auto& q : queries) {
            int L = q[0];
            int R = q[1];
            
            int segL = pos_to_seg[L];
            int segR = pos_to_seg[R];
            
            if (segR - segL < 2) {
                res.push_back(total_ones);
                continue;
            }
            
            int max_gain = 0;
            max_gain = max(max_gain, eval(segL + 1, L, R, segL, segR));
            max_gain = max(max_gain, eval(segR - 1, L, R, segL, segR));
            
            if (segL + 2 <= segR - 2) {
                max_gain = max(max_gain, queryRMQ(segL + 2, segR - 2));
            }
            
            res.push_back(total_ones + max_gain);
        }
        
        return res;
    }
};
