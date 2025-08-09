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

int findMaxValue(Node* node) {
    if (node == nullptr) {
        return INT_MIN;
    }
    int maxValue = node->data;
    int leftMax = findMaxValue(node->left);
    int rightMax = findMaxValue(node->right);
    if (leftMax > maxValue) {
        maxValue = leftMax;
    }
    if (rightMax > maxValue) {
        maxValue = rightMax;
    }
    return maxValue;
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    int maxValue = findMaxValue(root);
    std::cout << "Maximum value in the binary tree: " << maxValue << std::endl;
    return 0;
}
