#include <iostream>
#include <vector>

void dfs(const std::vector<std::vector<int>>& graph, int vertex, std::vector<bool>& visited) {
    visited[vertex] = true;
    std::cout << vertex << " ";

    for (int neighbor : graph[vertex]) {
        if (!visited[neighbor]) {
            dfs(graph, neighbor, visited);
        }
    }
}

int main() {
    int numVertices = 5;
    std::vector<std::vector<int>> graph = {{1, 2}, {0, 3, 4}, {0, 4}, {1}, {1, 2}};

    std::vector<bool> visited(numVertices, false);

    for (int i = 0; i < numVertices; i++) {
        if (!visited[i]) {
            dfs(graph, i, visited);
        }
    }

    return 0;
}

