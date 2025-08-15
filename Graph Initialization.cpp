#include <iostream>
#include <vector>

std::vector<std::vector<int>> initializeGraph(int numVertices) {
    return std::vector<std::vector<int>>(numVertices);
}

int main() {
    int numVertices = 5;
    std::vector<std::vector<int>> graph = initializeGraph(numVertices);

    for (int i = 0; i < numVertices; i++) {
        std::cout << "Vertex " << i << ": ";
        for (int neighbor : graph[i]) {
            std::cout << neighbor << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

