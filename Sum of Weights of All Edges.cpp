#include <iostream>
#include <vector>

struct Edge {
    int destination;
    int weight;
};

int sumOfWeights(const std::vector<std::vector<Edge>>& graph) {
    int sum = 0;
    for (const auto& edges : graph) {
        for (const auto& edge : edges) {
            sum += edge.weight;
        }
    }
    return sum / 2; // Divide by 2 to avoid counting each edge twice
}

int main() {
    int numVertices = 4;
    std::vector<std::vector<Edge>> graph = {
        {{1, 2}, {2, 3}},
        {{0, 2}, {3, 1}},
        {{0, 3}, {3, 4}},
        {{1, 1}, {2, 4}}
    };

    int sum = sumOfWeights(graph);
    std::cout << "Sum of weights: " << sum << std::endl;

    return 0;
}
