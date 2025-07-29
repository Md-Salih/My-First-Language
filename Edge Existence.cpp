#include <iostream>
#include <vector>
#include <algorithm>

bool edgeExists(const std::vector<std::vector<int>>& graph, int vertex1, int vertex2) {
    return std::find(graph[vertex1].begin(), graph[vertex1].end(), vertex2) != graph[vertex1].end();
}

int main() {
    std::vector<std::vector<int>> graph = {{1, 2}, {0, 3}, {0, 4}, {1}, {2}};

    int vertex1 = 0;
    int vertex2 = 2;

    if (edgeExists(graph, vertex1, vertex2)) {
        std::cout << "Edge exists between vertices " << vertex1 << " and " << vertex2 << std::endl;
    } else {
        std::cout << "Edge does not exist between vertices " << vertex1 << " and " << vertex2 << std::endl;
    }

    return 0;
}
