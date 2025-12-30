#include <bits/stdc++.h>
using namespace std;

struct State {
    int link, len;
    map<char,int> next;
};

State sa[200000];
int last, sz;

void sa_init(){
    sa[0].len = 0;
    sa[0].link = -1;
    sz = 1;
    last = 0;
}

void sa_extend(char c){
    int cur = sz++;
    sa[cur].len = sa[last].len + 1;

    int p = last;
    while(p != -1 && !sa[p].next.count(c)){
        sa[p].next[c] = cur;
        p = sa[p].link;
    }

    if(p == -1){
        sa[cur].link = 0;
    } else {
        int q = sa[p].next[c];
        if(sa[p].len + 1 == sa[q].len){
            sa[cur].link = q;
        } else {
            int clone = sz++;
            sa[clone] = sa[q];
            sa[clone].len = sa[p].len + 1;

            while(p != -1 && sa[p].next[c] == q){
                sa[p].next[c] = clone;
                p = sa[p].link;
            }
            sa[q].link = sa[cur].link = clone;
        }
    }
    last = cur;
}

int main(){
    string s = "ababa";
    sa_init();
    for(char c : s) sa_extend(c);

    long long ans = 0;
    for(int i = 1; i < sz; i++)
        ans += sa[i].len - sa[sa[i].link].len;

    cout << ans;
}
