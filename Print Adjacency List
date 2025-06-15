#include <iostream>
#include <vector>

void printAdjacencyList(const std::vector<std::vector<int>>& graph) {
    for (int i = 0; i < graph.size(); i++) {
        std::cout << "Vertex " << i << ": ";
        for (int neighbor : graph[i]) {
            std::cout << neighbor << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::vector<int>> graph = {{1, 2}, {0, 3}, {0, 3}, {1, 2}};

    printAdjacencyList(graph);

    return 0;
}
