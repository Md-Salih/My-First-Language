#include <iostream>
#include <stack>

int getStackSize(std::stack<int>& stack) {
    return stack.size();
}

int main() {
    std::stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    std::cout << "Stack size: " << getStackSize(stack) << std::endl;
    return 0;
}

