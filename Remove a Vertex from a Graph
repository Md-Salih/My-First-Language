#include <iostream>
#include <vector>
#include <algorithm>

void removeVertex(std::vector<std::vector<int>>& graph, int vertex) {
    graph.erase(graph.begin() + vertex);

    for (auto& neighbors : graph) {
        neighbors.erase(std::remove_if(neighbors.begin(), neighbors.end(), [vertex](int neighbor) { return neighbor == vertex; }), neighbors.end());
        for (auto& neighbor : neighbors) {
            if (neighbor > vertex) {
                neighbor--;
            }
        }
    }
}

int main() {
    std::vector<std::vector<int>> graph = {{1}, {0, 2}, {1}};

    removeVertex(graph, 1);

    for (int i = 0; i < graph.size(); i++) {
        std::cout << "Vertex " << i << ": ";
        for (int neighbor : graph[i]) {
            std::cout << neighbor << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
