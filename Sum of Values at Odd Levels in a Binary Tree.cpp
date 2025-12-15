#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node *left, *right;
    Node(int x) : val(x), left(NULL), right(NULL) {}
};

int sumOddLevels(Node* root) {
    if (!root) return 0;

    queue<pair<Node*, int>> q;
    q.push({root, 0});
    int sum = 0;

    while (!q.empty()) {
        auto [node, level] = q.front();
        q.pop();

        if (level % 2 == 1)
            sum += node->val;

        if (node->left) q.push({node->left, level + 1});
        if (node->right) q.push({node->right, level + 1});
    }

    return sum;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << sumOddLevels(root);
    return 0;
}
