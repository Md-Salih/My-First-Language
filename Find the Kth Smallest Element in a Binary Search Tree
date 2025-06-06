#include <iostream>
#include <stack>

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

int kthSmallestElement(Node* root, int k) {
    std::stack<Node*> stack;
    Node* current = root;
    int count = 0;

    while (current != nullptr || !stack.empty()) {
        while (current != nullptr) {
            stack.push(current);
            current = current->left;
        }

        current = stack.top();
        stack.pop();
        count++;

        if (count == k) {
            return current->data;
        }

        current = current->right;
    }

    return -1; // Return -1 if k is larger than the number of nodes
}

int main() {
    Node* root = new Node(8);
    root->left = new Node(3);
    root->right = new Node(10);
    root->left->left = new Node(1);
    root->left->right = new Node(6);
    root->right->right = new Node(14);
    root->left->right->left = new Node(4);
    root->left->right->right = new Node(7);
    root->right->right->left = new Node(13);

    int k = 5;
    int result = kthSmallestElement(root, k);
    if (result != -1) {
        std::cout << "The " << k << "th smallest element is: " << result << std::endl;
    } else {
        std::cout << "k is larger than the number of nodes." << std::endl;
    }

    return 0;
}
