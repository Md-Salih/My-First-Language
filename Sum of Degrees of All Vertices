#include <iostream>
#include <vector>

int sumOfDegrees(const std::vector<std::vector<int>>& graph) {
    int sum = 0;
    for (const auto& neighbors : graph) {
        sum += neighbors.size();
    }
    return sum;
}

int main() {
    int numVertices = 4;
    std::vector<std::vector<int>> graph = {{1, 2}, {0, 3}, {0, 3}, {1, 2}};

    int sum = sumOfDegrees(graph);
    std::cout << "Sum of degrees: " << sum << std::endl;

    return 0;
}
