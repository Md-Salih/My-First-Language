#include <iostream>
#include <vector>

bool isUndirected(const std::vector<std::vector<int>>& graph) {
    for (int i = 0; i < graph.size(); i++) {
        for (int neighbor : graph[i]) {
            if (std::find(graph[neighbor].begin(), graph[neighbor].end(), i) == graph[neighbor].end()) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    std::vector<std::vector<int>> graph = {{1, 2}, {0, 3}, {0, 3}, {1, 2}};

    if (isUndirected(graph)) {
        std::cout << "Graph is undirected." << std::endl;
    } else {
        std::cout << "Graph is directed." << std::endl;
    }

    return 0;
}
