#include <iostream>
#include <stack>

int findMaxElement(std::stack<int> stack) {
    int maxElement = stack.top();
    while (!stack.empty()) {
        if (stack.top() > maxElement) {
            maxElement = stack.top();
        }
        stack.pop();
    }
    return maxElement;
}

int main() {
    std::stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    std::cout << "Maximum element: " << findMaxElement(stack) << std::endl;
    return 0;
}
