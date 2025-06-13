#include <iostream>
#include <vector>
#include <algorithm>

void removeEdge(std::vector<std::vector<int>>& graph, int vertex1, int vertex2) {
    graph[vertex1].erase(std::remove(graph[vertex1].begin(), graph[vertex1].end(), vertex2), graph[vertex1].end());
    graph[vertex2].erase(std::remove(graph[vertex2].begin(), graph[vertex2].end(), vertex1), graph[vertex2].end()); // For undirected graph
}

int main() {
    int numVertices = 5;
    std::vector<std::vector<int>> graph(numVertices);

    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(0);
    graph[1].push_back(3);
    graph[2].push_back(0);
    graph[3].push_back(1);

    removeEdge(graph, 0, 1);

    for (int i = 0; i < numVertices; i++) {
        std::cout << "Vertex " << i << ": ";
        for (int neighbor : graph[i]) {
            std::cout << neighbor << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
