#include <iostream>
#include <queue>
#include <stack>

void interleaveQueue(std::queue<int>& queue) {
    int size = queue.size();
    std::stack<int> stack;
    for (int i = 0; i < size / 2; i++) {
        stack.push(queue.front());
        queue.pop();
    }
    while (!stack.empty()) {
        queue.push(stack.top());
        stack.pop();
    }
    for (int i = 0; i < size / 2; i++) {
        queue.push(queue.front());
        queue.pop();
    }
    for (int i = 0; i < size / 2; i++) {
        stack.push(queue.front());
        queue.pop();
    }
    while (!stack.empty()) {
        queue.push(stack.top());
        stack.pop();
        queue.push(queue.front());
        queue.pop();
    }
}

int main() {
    std::queue<int> queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);
    interleaveQueue(queue);
    while (!queue.empty()) {
        std::cout << queue.front() << " ";
        queue.pop();
    }
    return 0;
}
