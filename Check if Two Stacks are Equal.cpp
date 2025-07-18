#include <iostream>
#include <stack>

bool areStacksEqual(std::stack<int> stack1, std::stack<int> stack2) {
    if (stack1.size() != stack2.size()) {
        return false;
    }
    while (!stack1.empty()) {
        if (stack1.top() != stack2.top()) {
            return false;
        }
        stack1.pop();
        stack2.pop();
    }
    return true;
}

int main() {
    std::stack<int> stack1;
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);

    std::stack<int> stack2;
    stack2.push(10);
    stack2.push(20);
    stack2.push(30);

    std::cout << "Are stacks equal? " << (areStacksEqual(stack1, stack2) ? "Yes" : "No") << std::endl;
    return 0;
}
