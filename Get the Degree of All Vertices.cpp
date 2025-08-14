#include <iostream>
#include <vector>

void getDegrees(const std::vector<std::vector<int>>& graph) {
    for (int i = 0; i < graph.size(); i++) {
        std::cout << "Degree of vertex " << i << ": " << graph[i].size() << std::endl;
    }
}

int main() {
    std::vector<std::vector<int>> graph = {{1, 2}, {0, 3}, {0, 3}, {1, 2}};

    getDegrees(graph);

    return 0;
}
