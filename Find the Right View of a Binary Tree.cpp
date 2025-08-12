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

void rightView(Node* root) {
    if (root == nullptr) {
        return;
    }

    std::queue<Node*> queue;
    queue.push(root);

    while (!queue.empty()) {
        int levelSize = queue.size();
        for (int i = 0; i < levelSize; i++) {
            Node* node = queue.front();
            queue.pop();

            if (i == levelSize - 1) {
                std::cout << node->data << " ";
            }

            if (node->left != nullptr) {
                queue.push(node->left);
            }
            if (node->right != nullptr) {
                queue.push(node->right);
            }
        }
   }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    std::cout << "Right view of the binary tree: ";
    rightView(root);
    return 0;
}
