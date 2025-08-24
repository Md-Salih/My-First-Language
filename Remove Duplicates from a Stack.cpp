#include <iostream>
#include <stack>
#include <unordered_set>

void removeDuplicates(std::stack<int>& stack) {
    std::unordered_set<int> set;
    std::stack<int> tempStack;
    while (!stack.empty()) {
        int top = stack.top();
        stack.pop();
        if (set.find(top) == set.end()) {
            set.insert(top);
            tempStack.push(top);
        }
    }
    stack = tempStack;
}

int main() {
    std::stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(10);
    stack.push(30);
    stack.push(20);
    removeDuplicates(stack);
    while (!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }
    return 0;
}
