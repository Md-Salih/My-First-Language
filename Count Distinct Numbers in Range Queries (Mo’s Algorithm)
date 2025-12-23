#include <bits/stdc++.h>
using namespace std;

struct Query {
    int l, r, idx;
};

int BLOCK;
bool cmp(Query &a, Query &b) {
    if (a.l / BLOCK != b.l / BLOCK)
        return a.l / BLOCK < b.l / BLOCK;
    return a.r < b.r;
}

int main() {
    vector<int> arr = {1,2,1,3,2};
    int n = arr.size();

    vector<Query> queries = {{1,4,0}};
    int q = queries.size();

    BLOCK = sqrt(n);
    sort(queries.begin(), queries.end(), cmp);

    unordered_map<int,int> freq;
    vector<int> ans(q);

    int curL = 0, curR = -1, distinct = 0;

    for (auto &qr : queries) {
        while (curL > qr.l) {
            curL--;
            if (++freq[arr[curL]] == 1) distinct++;
        }
        while (curR < qr.r) {
            curR++;
            if (++freq[arr[curR]] == 1) distinct++;
        }
        while (curL < qr.l) {
            if (--freq[arr[curL]] == 0) distinct--;
            curL++;
        }
        while (curR > qr.r) {
            if (--freq[arr[curR]] == 0) distinct--;
            curR--;
        }
        ans[qr.idx] = distinct;
    }

    for (int x : ans) cout << x << " ";
    return 0;
}
