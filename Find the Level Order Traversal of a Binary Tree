#include <iostream>
#include <queue>

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

void levelOrderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    std::queue<Node*> queue;
    queue.push(root);
    while (!queue.empty()) {
        Node* node = queue.front();
        queue.pop();
        std::cout << node->data << " ";
        if (node->left != nullptr) {
            queue.push(node->left);
        }
        if (node->right != nullptr) {
            queue.push(node->right);
        }
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    std::cout << "Level order traversal: ";
    levelOrderTraversal(root);
    return 0;
}
