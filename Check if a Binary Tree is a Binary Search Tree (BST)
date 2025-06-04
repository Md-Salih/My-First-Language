#include <iostream>
#include <climits>

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

bool isBST(Node* node, int min = INT_MIN, int max = INT_MAX) {
    if (node == nullptr) {
        return true;
    }
    if (node->data <= min || node->data >= max) {
        return false;
    }
    return isBST(node->left, min, node->data) && isBST(node->right, node->data, max);
}

int main() {
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);

    bool isBSTree = isBST(root);
    std::cout << "Is the binary tree a BST? " << (isBSTree ? "Yes" : "No") << std::endl;
    return 0;
}
