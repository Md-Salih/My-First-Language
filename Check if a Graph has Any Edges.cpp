#include <iostream>
#include <vector>

bool hasEdges(const std::vector<std::vector<int>>& graph) {
    for (const auto& neighbors : graph) {
        if (!neighbors.empty()) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<std::vector<int>> graph = {{}, {}, {}};

    if (hasEdges(graph)) {
        std::cout << "Graph has edges." << std::endl;
    } else {
        std::cout << "Graph has no edges." << std::endl;
    }

    return 0;
}
