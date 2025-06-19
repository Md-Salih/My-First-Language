#include <iostream>
#include <vector>

void addEdge(std::vector<std::vector<int>>& graph, int vertex1, int vertex2) {
    graph[vertex1].push_back(vertex2);
    graph[vertex2].push_back(vertex1); // For undirected graph
}

int main() {
    std::vector<std::vector<int>> graph(5);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);

    for (int i = 0; i < graph.size(); i++) {
        std::cout << "Vertex " << i << ": ";
        for (int neighbor : graph[i]) {
            std::cout << neighbor << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
