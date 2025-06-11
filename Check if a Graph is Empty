#include <iostream>
#include <vector>

bool isEmptyGraph(const std::vector<std::vector<int>>& graph) {
    for (const auto& neighbors : graph) {
        if (!neighbors.empty()) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<std::vector<int>> graph = {{}, {}, {}};
    if (isEmptyGraph(graph)) {
        std::cout << "Graph is empty." << std::endl;
    } else {
        std::cout << "Graph is not empty." << std::endl;
    }
    return 0;
}
