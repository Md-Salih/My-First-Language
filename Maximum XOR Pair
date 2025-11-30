#include <bits/stdc++.h>
using namespace std;

struct Node {
    Node* bit[2];
    Node() { bit[0] = bit[1] = NULL; }
};

class Trie {
public:
    Node* root;
    Trie() { root = new Node(); }

    void insert(int num) {
        Node* cur = root;
        for(int i = 31; i >= 0; i--) {
            int b = (num >> i) & 1;
            if(!cur->bit[b]) cur->bit[b] = new Node();
            cur = cur->bit[b];
        }
    }

    int maxXor(int num) {
        Node* cur = root;
        int ans = 0;
        for(int i = 31; i >= 0; i--) {
            int b = (num >> i) & 1;
            int want = 1 - b;
            if(cur->bit[want]) {
                ans |= (1 << i);
                cur = cur->bit[want];
            } else {
                cur = cur->bit[b];
            }
        }
        return ans;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int &x : arr) cin >> x;

    Trie t;
    for(int x : arr) t.insert(x);

    int maxX = 0;
    for(int x : arr) {
        maxX = max(maxX, t.maxXor(x));
    }

    cout << maxX;
    return 0;
}
