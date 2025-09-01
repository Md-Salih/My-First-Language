#include <iostream>
#include <vector>
#include <stack>

void topologicalSortUtil(const std::vector<std::vector<int>>& graph, int vertex, std::vector<bool>& visited, std::stack<int>& stack) {
    visited[vertex] = true;

    for (int neighbor : graph[vertex]) {
        if (!visited[neighbor]) {
            topologicalSortUtil(graph, neighbor, visited, stack);
        }
    }

    stack.push(vertex);
}

void topologicalSort(const std::vector<std::vector<int>>& graph) {
    int numVertices = graph.size();
    std::vector<bool> visited(numVertices, false);
    std::stack<int> stack;

    for (int i = 0; i < numVertices; i++) {
        if (!visited[i]) {
            topologicalSortUtil(graph, i, visited, stack);
        }
    }

    while (!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
 }
}

int main() {
    int numVertices = 6;
    std::vector<std::vector<int>> graph = {{}, {}, {3}, {1}, {0, 1}, {2, 0}};

    topologicalSort(graph);

    return 0;
}
