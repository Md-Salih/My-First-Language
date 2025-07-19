#include <iostream>
#include <stack>

bool isStackEmpty(std::stack<int>& stack) {
    return stack.empty();
}

int main() {
    std::stack<int> stack;
    std::cout << "Is stack empty? " << (isStackEmpty(stack) ? "Yes" : "No") << std::endl;
    stack.push(10);
    std::cout << "Is stack empty? " << (isStackEmpty(stack) ? "Yes" : "No") << std::endl;
    return 0;
}

