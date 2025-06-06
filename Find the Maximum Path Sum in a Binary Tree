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

int maxPathSumUtil(Node* root, int& maxSum) {
    if (root == nullptr) {
        return 0;
    }
    int leftSum = std::max(maxPathSumUtil(root->left, maxSum), 0);
    int rightSum = std::max(maxPathSumUtil(root->right, maxSum), 0);
    maxSum = std::max(maxSum, root->data + leftSum + rightSum);
    return root->data + std::max(leftSum, rightSum);
}

int maxPathSum(Node* root) {
    int maxSum = INT_MIN;
    maxPathSumUtil(root, maxSum);
    return maxSum;
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(2);
    root->right = new Node(10);
    root->left->left = new Node(20);
    root->left->right = new Node(1);
    root->right->right = new Node(-25);
    root->right->right->left = new Node(3);
    root->right->right->right = new Node(4);

    int maxSum = maxPathSum(root);
    std::cout << "Maximum path sum: " << maxSum << std::endl;
    return 0;
}

