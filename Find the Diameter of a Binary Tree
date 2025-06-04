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

int height(Node* node) {
    if (node == nullptr) {
        return 0;
    }
    return 1 + std::max(height(node->left), height(node->right));
}

int diameter(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int leftDiameter = diameter(root->left);
    int rightDiameter = diameter(root->right);
    return std::max(leftHeight + rightHeight + 1, std::max(leftDiameter, rightDiameter));
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

int diameterValue = diameter(root);
    std::cout << "Diameter of the binary tree: " << diameterValue << std::endl;
    return 0;
}
