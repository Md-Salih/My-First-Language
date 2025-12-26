#include <bits/stdc++.h>
using namespace std;

vector<int> buildSuffixArray(string s){
    int n = s.size();
    vector<int> sa(n), ranks(s.begin(), s.end()), tmp(n);

    for(int i=0;i<n;i++) sa[i]=i;

    for(int k=1;k<n;k<<=1){
        auto cmp=[&](int a,int b){
            if(ranks[a]!=ranks[b]) return ranks[a]<ranks[b];
            int ra = a+k<n ? ranks[a+k] : -1;
            int rb = b+k<n ? ranks[b+k] : -1;
            return ra<rb;
        };
        sort(sa.begin(), sa.end(), cmp);

        tmp[sa[0]]=0;
        for(int i=1;i<n;i++)
            tmp[sa[i]] = tmp[sa[i-1]] + cmp(sa[i-1], sa[i]);

        ranks=tmp;
    }
    return sa;
}

vector<int> buildLCP(string s, vector<int>& sa){
    int n = s.size(), k=0;
    vector<int> rank(n), lcp(n-1);
    for(int i=0;i<n;i++) rank[sa[i]]=i;

    for(int i=0;i<n;i++){
        if(rank[i]==n-1){ k=0; continue; }
        int j = sa[rank[i]+1];
        while(i+k<n && j+k<n && s[i+k]==s[j+k]) k++;
        lcp[rank[i]] = k;
        if(k) k--;
    }
    return lcp;
}

int main(){
    string s = "banana";
    auto sa = buildSuffixArray(s);
    auto lcp = buildLCP(s, sa);

    int best = 0, idx = 0;
    for(int i=0;i<lcp.size();i++)
        if(lcp[i] > best){
            best = lcp[i];
            idx = sa[i];
        }

    if(best == 0) cout << "No Repetition";
    else cout << s.substr(idx, best);
}
