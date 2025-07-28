#include <iostream>
#include <stack>
#include <vector>

void deleteMiddleElement(std::stack<int>& stack) {
    std::vector<int> vec;
    while (!stack.empty()) {
        vec.push_back(stack.top());
        stack.pop();
    }
    int size = vec.size();
    vec.erase(vec.begin() + size / 2);
    for (int i = vec.size() - 1; i >= 0; i--) {
        stack.push(vec[i]);
    }
}

int main() {
    std::stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    deleteMiddleElement(stack);
    while (!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }
    return 0;
}
