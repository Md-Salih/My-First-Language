#include <iostream>
#include <stack>

void sortStack(std::stack<int>& stack) {
    std::stack<int> tempStack;
    while (!stack.empty()) {
        int temp = stack.top();
        stack.pop();
        while (!tempStack.empty() && tempStack.top() > temp) {
            stack.push(tempStack.top());
            tempStack.pop();
        }
        tempStack.push(temp);
    }
    stack = tempStack;
}

int main() {
    std::stack<int> stack;
    stack.push(5);
    stack.push(3);
    stack.push(8);
    stack.push(1);
    stack.push(2);
    sortStack(stack);
    while (!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }
    return 0;
}
