#include <iostream>
#include <stack>

int findMiddleElement(std::stack<int>& stack) {
    std::stack<int> tempStack = stack;
    int size = tempStack.size();
    for (int i = 0; i < size / 2; i++) {
        tempStack.pop();
    }
    return tempStack.top();
}

int main() {
    std::stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    std::cout << "Middle element: " << findMiddleElement(stack) << std::endl;
    return 0;
}
