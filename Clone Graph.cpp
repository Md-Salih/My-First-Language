#include <iostream>
#include <vector>
#include <unordered_map>

class Node {
public:
    int val;
    std::vector<Node*> neighbors;

    Node() {
        val = 0;
        neighbors = {};
    }

    Node(int _val) {
        val = _val;
        neighbors = {};
    }

    Node(int _val, std::vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

Node* cloneGraph(Node* node) {
    if (!node) return nullptr;

    std::unordered_map<Node*, Node*> visited;

    std::function<Node*(Node*)> dfs = [&](Node* node) {
        if (visited.find(node) != visited.end()) {
            return visited[node];
        }

        Node* clone = new Node(node->val);
        visited[node] = clone;

        for (Node* neighbor : node->neighbors) {
            clone->neighbors.push_back(dfs(neighbor));
        }

        return clone;
    };

    return dfs(node);
}

int main() {
    // Example usage
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    node1->neighbors.push_back(node2);
    node2->neighbors.push_back(node1);

    Node* clonedNode = cloneGraph(node1);

    return 0;
}
