#include <iostream>
#include <vector>

int maxDegree(const std::vector<std::vector<int>>& graph) {
    int max = 0;
    for (const auto& neighbors : graph) {
        if (neighbors.size() > max) {
            max = neighbors.size();
        }
    }
    return max;
}

int main() {
    std::vector<std::vector<int>> graph = {{1, 2}, {0, 3, 4}, {0}, {1}, {1}};

    int max = maxDegree(graph);
    std::cout << "Maximum degree: " << max << std::endl;

    return 0;
}
