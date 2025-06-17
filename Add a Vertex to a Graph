#include <iostream>
#include <vector>

void addVertex(std::vector<std::vector<int>>& graph) {
    graph.push_back({});
}

int main() {
    std::vector<std::vector<int>> graph = {{1}, {0}};

    addVertex(graph);

    for (int i = 0; i < graph.size(); i++) {
        std::cout << "Vertex " << i << ": ";
        for (int neighbor : graph[i]) {
            std::cout << neighbor << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
