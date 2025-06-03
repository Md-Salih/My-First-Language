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

Node* findLCA(Node* root, int node1, int node2) {
    if (root == nullptr) {
        return nullptr;
    }
    if (root->data == node1 || root->data == node2) {
        return root;
    }
    Node* leftLCA = findLCA(root->left, node1, node2);
    Node* rightLCA = findLCA(root->right, node1, node2);
    if (leftLCA && rightLCA) {
        return root;
    }
    return (leftLCA != nullptr) ? leftLCA : rightLCA;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Node* lca = findLCA(root, 4, 5);
    if (lca != nullptr) {
        std::cout << "Lowest common ancestor of 4 and 5: " << lca->data << std::endl;
    } else {
        std::cout << "Nodes not found in the binary tree." << std::endl;
    }
    return 0;
}
