#include <iostream>
#include <vector>

int countEdges(const std::vector<std::vector<int>>& graph) {
    int count = 0;
    for (const auto& neighbors : graph) {
        count += neighbors.size();
    }
    return count / 2; // Divide by 2 to avoid counting each edge twice
}

int main() {
    std::vector<std::vector<int>> graph = {{1, 2}, {0, 3}, {0, 3}, {1, 2}};

    int numEdges = countEdges(graph);
    std::cout << "Number of edges: " << numEdges << std::endl;

    return 0;
}
