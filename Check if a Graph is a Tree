#include <iostream>
#include <vector>

bool isTree(const std::vector<std::vector<int>>& graph) {
    int numVertices = graph.size();
    std::vector<bool> visited(numVertices, false);

    // Check if graph is connected
    std::function<void(int)> dfs = [&](int vertex) {
        visited[vertex] = true;
        for (int neighbor : graph[vertex]) {
            if (!visited[neighbor]) {
                dfs(neighbor);
            } else if (neighbor != parent[vertex]) {
                // Cycle detected
                throw std::runtime_error("Graph is not a tree");
            }
        }
    };

    try {
        std::vector<int> parent(numVertices, -1);
        dfs(0);
        for (bool visit : visited) {
            if (!visit) {
                // Graph is not connected
                return false;
            }
        }
    } catch (const std::exception& e) {
        return false;
    }

    return true;
}

int main() {
    std::vector<std::vector<int>> graph = {{1}, {0, 2}, {1}};

    if (isTree(graph)) {
        std::cout << "Graph is a tree." << std::endl;
    } else {
        std::cout << "Graph is not a tree." << std::endl;
    }

    return 0;
}

