#include <iostream>
#include <vector>

int countVerticesWithNoEdges(const std::vector<std::vector<int>>& graph) {
    int count = 0;
    for (const auto& neighbors : graph) {
        if (neighbors.empty()) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<std::vector<int>> graph = {{1, 2}, {}, {0, 3}, {}, {}};

    int count = countVerticesWithNoEdges(graph);
    std::cout << "Number of vertices with no edges: " << count << std::endl;

    return 0;
}

