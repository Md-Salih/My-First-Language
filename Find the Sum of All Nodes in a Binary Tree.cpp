#include <iostream>

struct Node {
    int right;
    Node* int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

int findSum(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    return root->data + findSum(root->left) + findSum(root->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int sum = findSum(root);
    std::cout << "Sum of all nodes: " << sum << std::endl;
    return 0;
}
