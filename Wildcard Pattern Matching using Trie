#include <bits/stdc++.h>
using namespace std;

class WordDictionary {
public:
    struct Node{
        bool end = false;
        Node* child[26] = {};
    };

    Node* root;

    WordDictionary() {
        root = new Node();
    }

    void addWord(string word) {
        Node* cur = root;
        for(char c : word){
            int i = c - 'a';
            if(!cur->child[i])
                cur->child[i] = new Node();
            cur = cur->child[i];
        }
        cur->end = true;
    }

    bool dfs(Node* node, string &w, int idx){
        if(idx == w.size()) return node->end;

        char c = w[idx];
        if(c == '.'){
            for(auto &n : node->child)
                if(n && dfs(n, w, idx+1))
                    return true;
            return false;
        }
        int i = c - 'a';
        return node->child[i] && dfs(node->child[i], w, idx+1);
    }

    bool search(string word) {
        return dfs(root, word, 0);
    }
};

int main(){
    WordDictionary d;
    d.addWord("code");
    d.addWord("cool");

    cout << d.search("co.e") << endl;
    cout << d.search("c..l") << endl;
    cout << d.search("col");
}
