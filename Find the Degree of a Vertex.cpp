#include <iostream>
#include <vector>

int findDegree(const std::vector<std::vector<int>>& graph, int vertex) {
    return graph[vertex].size();
}

int main() {
    std::vector<std::vector<int>> graph = {{1, 2}, {0, 3}, {0, 3}, {1, 2}};

    int vertex = 0;
    int degree = findDegree(graph, vertex);
    std::cout << "Degree of vertex " << vertex << ": " << degree << std::endl;

    return 0;
}
