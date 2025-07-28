#include <iostream>
#include <vector>
#include <queue>

bool isBipartiteUtil(const std::vector<std::vector<int>>& graph, int vertex, std::vector<int>& color) {
    std::queue<int> queue;
    queue.push(vertex);
    color[vertex] = 0;

    while (!queue.empty()) {
        int currentVertex = queue.front();
        queue.pop();

        for (int neighbor : graph[currentVertex]) {
            if (color[neighbor] == -1) {
                color[neighbor] = 1 - color[currentVertex];
                queue.push(neighbor);
            } else if (color[neighbor] == color[currentVertex]) {
                return false;
            }
        }
    }

    return true;
}

bool isBipartite(const std::vector<std::vector<int>>& graph) {
    int numVertices = graph.size();
    std::vector<int> color(numVertices, -1);

    for (int i = 0; i < numVertices; i++) {
        if (color[i] == -1) {
if (!isBipartiteUtil(graph, i, color)) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int numVertices = 4;
    std::vector<std::vector<int>> graph = {{1, 3}, {0, 2}, {1, 3}, {0, 2}};

    if (isBipartite(graph)) {
        std::cout << "Graph is bipartite." << std::endl;
    } else {
        std::cout << "Graph is not bipartite." << std::endl;
    }

    return 0;
}
