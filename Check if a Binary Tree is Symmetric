#include <iostream>

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

bool isSymmetric(Node* node1, Node* node2) {
    if (node1 == nullptr && node2 == nullptr) {
        return true;
    }
    if (node1 == nullptr || node2 == nullptr) {
        return false;
    }
    return (node1->data == node2->data) && isSymmetric(node1->left, node2->right) && isSymmetric(node1->right, node2->left);
}

bool isTreeSymmetric(Node* root) {
    if (root == nullptr) {
        return true;
    }
    return isSymmetric(root->left, root->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(4);
    root->right->right = new Node(3);

    bool isSymmetricTree = isTreeSymmetric(root);
    std::cout << "Is the binary tree symmetric? " << (isSymmetricTree ? "Yes" : "No") << std::endl;
    return 0;
}
