#include <bits/stdc++.h>
using namespace std;

struct Fenwick {
    int n;
    vector<int> bit;

    Fenwick(int n) : n(n), bit(n + 1, 0) {}

    void update(int i, int val) {
        for (++i; i <= n; i += i & -i)
            bit[i] += val;
    }

    int query(int i) {
        int sum = 0;
        for (++i; i > 0; i -= i & -i)
            sum += bit[i];
        return sum;
    }

    int rangeQuery(int l, int r) {
        return query(r) - query(l - 1);
    }
};

int main() {
    vector<int> arr = {1, 3, 5, 7, 9};
    Fenwick fw(arr.size());

    for (int i = 0; i < arr.size(); i++)
        fw.update(i, arr[i]);

    cout << fw.rangeQuery(1, 3) << "\n";
    fw.update(2, 4);
    cout << fw.rangeQuery(1, 3);
    return 0;
}
