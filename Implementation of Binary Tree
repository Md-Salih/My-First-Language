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

class BinaryTree {
public:
    Node* root;

    BinaryTree() {
        root = nullptr;
    }

    void insert(int data) {
        if (root == nullptr) {
            root = new Node(data);
        } else {
            insertNode(root, data);
        }
    }

    void insertNode(Node* node, int data) {
        if (data < node->data) {
            if (node->left == nullptr) {
                node->left = new Node(data);
            } else {
                insertNode(node->left, data);
            }
        } else {
            if (node->right == nullptr) {
                node->right = new Node(data);
            } else {
                insertNode(node->right, data);
            }
        }
    }

    void inorderTraversal(Node* node) {
        if (node != nullptr) {
            inorderTraversal(node->left);
            std::cout << node->data << " ";
            inorderTraversal(node->right);
        }
    }
};

int main() {
    BinaryTree tree;
    tree.insert(8);
    tree.insert(3);
    tree.insert(10);
    tree.insert(1);
    tree.insert(6);
    tree.insert(14);
    tree.insert(4);
    tree.insert(7);
    tree.insert(13);

    std::cout << "Inorder traversal: ";
    tree.inorderTraversal(tree.root);
    return 0;
}
