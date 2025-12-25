#include <bits/stdc++.h>
using namespace std;

struct SegTree {
    int n;
    vector<long long> seg, lazy;

    SegTree(vector<int>& arr) {
        n = arr.size();
        seg.assign(4*n, 0);
        lazy.assign(4*n, 0);
        build(arr, 1, 0, n-1);
    }

    void build(vector<int>& a, int idx, int l, int r) {
        if(l == r) {
            seg[idx] = a[l];
            return;
        }
        int mid = (l+r)/2;
        build(a, idx*2, l, mid);
        build(a, idx*2+1, mid+1, r);
        seg[idx] = min(seg[idx*2], seg[idx*2+1]);
    }

    void push(int idx) {
        if(lazy[idx] != 0) {
            seg[idx*2] += lazy[idx];
            seg[idx*2+1] += lazy[idx];
            lazy[idx*2] += lazy[idx];
            lazy[idx*2+1] += lazy[idx];
            lazy[idx] = 0;
        }
    }

    void update(int idx, int l, int r, int ql, int qr, int val) {
        if(qr < l || ql > r) return;
        if(ql <= l && r <= qr) {
            seg[idx] += val;
            lazy[idx] += val;
            return;
        }
        push(idx);
        int mid = (l+r)/2;
        update(idx*2, l, mid, ql, qr, val);
        update(idx*2+1, mid+1, r, ql, qr, val);
        seg[idx] = min(seg[idx*2], seg[idx*2+1]);
    }

    long long query(int idx, int l, int r, int ql, int qr) {
        if(qr < l || ql > r) return 1e18;
        if(ql <= l && r <= qr)
            return seg[idx];

        push(idx);
        int mid = (l+r)/2;
        return min(query(idx*2,l,mid,ql,qr),
                   query(idx*2+1,mid+1,r,ql,qr));
    }
};

int main() {
    vector<int> arr = {5,2,6,3,1};
    SegTree st(arr);

    st.update(1,0,arr.size()-1,1,3,2);
    cout << st.query(1,0,arr.size()-1,0,4);
}
