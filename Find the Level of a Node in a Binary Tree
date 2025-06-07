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

int findLevel(Node* root, int target) {
    if (root == nullptr) {
        return -1;
    }

    std::queue<std::pair<Node*, int>> queue;
    queue.push({root, 1});

    while (!queue.empty()) {
        Node* node = queue.front().first;
        int level = queue.front().second;
        queue.pop();

        if (node->data == target) {
            return level;
        }

        if (node->left != nullptr) {
            queue.push({node->left, level + 1});
        }
        if (node->right != nullptr) {
            queue.push({node->right, level + 1});
        }
    }

return -1; // Node not found
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int target = 4;
    int level = findLevel(root, target);
    if (level != -1) {
        std::cout << "Level of node " << target << ": " << level << std::endl;
    } else {
        std::cout << "Node " << target << " not found." << std::endl;
    }
    return 0;
}
