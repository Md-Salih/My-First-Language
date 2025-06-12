#include <iostream>
#include <vector>

void createAdjacencyList(int numVertices, std::vector<std::pair<int, int>>& edges) {
    std::vector<std::vector<int>> adjacencyList(numVertices);

    for (const auto& edge : edges) {
        adjacencyList[edge.first].push_back(edge.second);
        adjacencyList[edge.second].push_back(edge.first); // For undirected graph
    }

    for (int i = 0; i < numVertices; i++) {
        std::cout << "Vertex " << i << ": ";
        for (int neighbor : adjacencyList[i]) {
            std::cout << neighbor << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int numVertices = 5;
    std::vector<std::pair<int, int>> edges = {{0, 1}, {0, 2}, {1, 3}, {2, 4}};

    createAdjacencyList(numVertices, edges);

    return 0;
}
