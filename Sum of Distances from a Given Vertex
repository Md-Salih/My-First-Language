#include <iostream>
#include <vector>
#include <queue>
#include <limits>

struct Edge {
    int destination;
    int weight;
};

void dijkstra(const std::vector<std::vector<Edge>>& graph, int source) {
    int numVertices = graph.size();
    std::vector<int> distance(numVertices, std::numeric_limits<int>::max());
    distance[source] = 0;

    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>> queue;
    queue.push({0, source});

    while (!queue.empty()) {
        int currentDistance = queue.top().first;
        int currentVertex = queue.top().second;
        queue.pop();

        for (const auto& edge : graph[currentVertex]) {
            int newDistance = currentDistance + edge.weight;
            if (newDistance < distance[edge.destination]) {
                distance[edge.destination] = newDistance;
                queue.push({newDistance, edge.destination});
            }
        }
    }

    int sum = 0;
    for (int dist : distance) {
        if (dist != std::numeric_limits<int>::max()) {
            sum += dist;
        }
    }

    std::cout << "Sum of distances: " << sum << std::endl;
}

int main() {
    int numVertices = 4;
    std::vector<std::vector<Edge>> graph = {
        {{1, 2}, {2, 3}},
        {{0, 2}, {3, 1}},
        {{0, 3}, {3, 4}},
        {{1, 1}, {2, 4}}
    };

    int source = 0;
    dijkstra(graph, source);

    return 0;
}
