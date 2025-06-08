#include <iostream>
#include <vector>
#include <queue>

void bfs(const std::vector<std::vector<int>>& graph, int start, int end) {
    std::vector<bool> visited(graph.size(), false);
    std::vector<int> distance(graph.size(), -1);
    std::queue<int> queue;

    queue.push(start);
    visited[start] = true;
    distance[start] = 0;

    while (!queue.empty()) {
        int vertex = queue.front();
        queue.pop();

        if (vertex == end) {
            std::cout << "Shortest distance: " << distance[vertex] << std::endl;
            return;
        }

        for (int neighbor : graph[vertex]) {
            if (!visited[neighbor]) {
                queue.push(neighbor);
                visited[neighbor] = true;
                distance[neighbor] = distance[vertex] + 1;
            }
        }
   }

    std::cout << "No path found." << std::endl;
}

int main() {
    int numVertices = 6;
    std::vector<std::vector<int>> graph = {{1, 2}, {0, 3, 4}, {0, 4}, {1}, {1, 2, 5}, {4}};

    int start = 0;
    int end = 5;

    bfs(graph, start, end);

    return 0;
}
