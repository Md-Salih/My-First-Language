#include <iostream>
#include <queue>
#include <stack>

void reverseQueue(std::queue<int>& queue) {
    std::stack<int> stack;
    while (!queue.empty()) {
        stack.push(queue.front());
        queue.pop();
    }
    while (!stack.empty()) {
        queue.push(stack.top());
        stack.pop();
    }
}

int main() {
    std::queue<int> queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);
    queue.push(5);
    reverseQueue(queue);
    while (!queue.empty()) {
        std::cout << queue.front() << " ";
        queue.pop();
    }
    return 0;
}
