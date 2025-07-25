#include <iostream>
#include <vector>

int countVertices(const std::vector<std::vector<int>>& graph) {
    return graph.size();
}

int main() {
    std::vector<std::vector<int>> graph = {{1, 2}, {0, 3}, {0, 4}, {1}, {2}};

    int numVertices = countVertices(graph);
    std::cout << "Number of vertices: " << numVertices << std::endl;

    return 0;
}
