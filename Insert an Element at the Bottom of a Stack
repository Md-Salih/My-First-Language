#include <iostream>
#include <stack>

void insertAtBottom(std::stack<int>& stack, int element) {
    std::stack<int> tempStack;
    while (!stack.empty()) {
        tempStack.push(stack.top());
        stack.pop();
    }
    stack.push(element);
    while (!tempStack.empty()) {
        stack.push(tempStack.top());
        tempStack.pop();
    }
}

int main() {
    std::stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    insertAtBottom(stack, 5);
    while (!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }
    return 0;
}

