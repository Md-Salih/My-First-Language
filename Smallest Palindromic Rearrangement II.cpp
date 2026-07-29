constexpr int INF=1e6+1, N=24;
int C[N][N]={{0}};

constexpr void Pascal() {
    if (C[0][0]==1) return; // computed once
    C[0][0]=1;
    for (int i=1; i<N; i++) {
        C[i][0]=C[i][i]=1;
        for (int j=1; j<=i/2; j++) {
            C[i][j]=C[i][i-j]=C[i-1][j-1]+C[i-1][j];
        }
    }
}

class Solution {
public:
    static int comb(int n, int k) {
        if (n<N) return C[n][k];//  look at the table
        if (2*k>n) k=n-k;// C(n, n-k)=C(n, k)
        int64_t ans=1;
        for (int i=1; i<=k; i++) {
            ans=ans*(n-i+1)/i;
            if (ans>=INF) return INF;
        }
        return ans;
    }

    static int perm(const array<int, 26>& freq, int sz) {
        int64_t ans=1;
        for (int f : freq) {
            if (f==0) continue;
            ans*=comb(sz, f);
            if (ans>=INF) return INF;
            sz-=f;
        }
        return ans;
    }

    static string smallestPalindrome(string& s, int k) {
        Pascal();
        const int n=s.size(), n0=n/2;
        array<int, 26> freq={0};
        for (int i=0; i<n0; i++)
            freq[s[i]-'a']++;
        
        int total=perm(freq, n0);
        if (k>total) return "";

        string left;
        left.reserve(n);
        int sz=n0;
        for (int i=0; i<n0; i++) {
            for (int c=0; c<26; c++) {
                if (freq[c]==0) continue;
                freq[c]--;
                int cnt=perm(freq, --sz);
                if (cnt>=k) {
                    left.push_back('a' + c);
                    break;
                } 
                else {
                    k -= cnt;
                    freq[c]++;// backtrack
                    sz++;
                }
            }
        }

        string right=left;
        reverse(right.begin(), right.end());
        if (n&1) left.push_back(s[n/2]);
        left.append(right);
        return left;
    }
};

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
