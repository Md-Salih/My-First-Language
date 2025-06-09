#include <iostream>
#include <vector>

void dfs(const std::vector<std::vector<int>>& graph, int vertex, std::vector<bool>& visited) {
    visited[vertex] = true;

    for (int neighbor : graph[vertex]) {
        if (!visited[neighbor]) {
            dfs(graph, neighbor, visited);
        }
    }
}

int countConnectedComponents(const std::vector<std::vector<int>>& graph) {
    int numVertices = graph.size();
    std::vector<bool> visited(numVertices, false);
    int count = 0;

    for (int i = 0; i < numVertices; i++) {
        if (!visited[i]) {
            dfs(graph, i, visited);
            count++;
        }
    }

    return count;
}

int main() {
    int numVertices = 5;
    std::vector<std::vector<int>> graph = {{1}, {0, 2}, {1}, {4}, {3}};

    int count = countConnectedComponents(graph);
    std::cout << "Number of connected components: " << count << std::endl;

    return 0;
}
