#include <iostream>
#include <vector>

int countIsolatedVertices(const std::vector<std::vector<int>>& graph) {
    int count = 0;
    for (const auto& neighbors : graph) {
        if (neighbors.empty()) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<std::vector<int>> graph = {{}, {2}, {}, {4}, {}};

    int count = countIsolatedVertices(graph);
    std::cout << "Number of isolated vertices: " << count << std::endl;

    return 0;
}
