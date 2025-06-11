#include <iostream>
#include <vector>

bool isCyclicUtil(const std::vector<std::vector<int>>& graph, int vertex, std::vector<bool>& visited, std::vector<bool>& recStack) {
    visited[vertex] = true;
    recStack[vertex] = true;

    for (int neighbor : graph[vertex]) {
        if (!visited[neighbor]) {
            if (isCyclicUtil(graph, neighbor, visited, recStack)) {
                return true;
            }
        } else if (recStack[neighbor]) {
            return true;
        }
    }

    recStack[vertex] = false;
    return false;
}

bool isCyclic(const std::vector<std::vector<int>>& graph) {
    int numVertices = graph.size();
    std::vector<bool> visited(numVertices, false);
    std::vector<bool> recStack(numVertices, false);

    for (int i = 0; i < numVertices; i++) {
        if (!visited[i]) {
            if (isCyclicUtil(graph, i, visited, recStack)) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int numVertices = 4;
    std::vector<std::vector<int>> graph = {{1}, {2, 0}, {0, 3}, {2}};

    if (isCyclic(graph)) {
        std::cout << "Graph contains cycle." << std::endl;
    } else {
        std::cout << "Graph doesn't contain cycle." << std::endl;
    }

    return 0;
}
