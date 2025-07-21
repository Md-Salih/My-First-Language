#include <iostream>
#include <vector>

bool vertexExists(const std::vector<std::vector<int>>& graph, int vertex) {
    return vertex >= 0 && vertex < graph.size();
}

int main() {
    int numVertices = 5;
    std::vector<std::vector<int>> graph(numVertices);

    int vertex = 3;

    if (vertexExists(graph, vertex)) {
        std::cout << "Vertex " << vertex << " exists." << std::endl;
    } else {
        std::cout << "Vertex " << vertex << " does not exist." << std::endl;
    }

    return 0;
}
