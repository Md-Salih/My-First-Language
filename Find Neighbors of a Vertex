#include <iostream>
#include <vector>

void findNeighbors(const std::vector<std::vector<int>>& graph, int vertex) {
    std::cout << "Neighbors of vertex " << vertex << ": ";
    for (int neighbor : graph[vertex]) {
        std::cout << neighbor << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<std::vector<int>> graph = {{1, 2}, {0, 3}, {0, 3}, {1, 2}};

    int vertex = 0;
    findNeighbors(graph, vertex);

    return 0;
}
