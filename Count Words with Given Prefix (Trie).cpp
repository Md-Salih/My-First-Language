#include <bits/stdc++.h>
using namespace std;

struct Trie {
    Trie* child[26];
    int count;

    Trie() {
        memset(child, 0, sizeof(child));
        count = 0;
    }
};

void insert(Trie* root, string word) {
    Trie* cur = root;
    for (char c : word) {
        int idx = c - 'a';
        if (!cur->child[idx])
            cur->child[idx] = new Trie();
        cur = cur->child[idx];
        cur->count++;
    }
}

int countPrefix(Trie* root, string prefix) {
    Trie* cur = root;
    for (char c : prefix) {
        int idx = c - 'a';
        if (!cur->child[idx]) return 0;
        cur = cur->child[idx];
    }
    return cur->count;
}

int main() {
    vector<string> words = {"apple", "app", "april", "bat"};
    Trie* root = new Trie();

    for (auto &w : words)
        insert(root, w);

    cout << countPrefix(root, "ap");
    return 0;
}
