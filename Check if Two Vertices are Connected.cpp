#include <iostream>
#include <vector>
#include <algorithm>

bool areConnected(const std::vector<std::vector<int>>& graph, int vertex1, int vertex2) {
    return std::find(graph[vertex1].begin(), graph[vertex1].end(), vertex2) != graph[vertex1].end();
}

int main() {
    std::vector<std::vector<int>> graph = {{1, 2}, {0, 3}, {0, 3}, {1, 2}};

    int vertex1 = 0;
    int vertex2 = 1;

    if (areConnected(graph, vertex1, vertex2)) {
        std::cout << "Vertices " << vertex1 << " and " << vertex2 << " are connected." << std::endl;
    } else {
        std::cout << "Vertices " << vertex1 << " and " << vertex2 << " are not connected." << std::endl;
    }

    return 0;
}
