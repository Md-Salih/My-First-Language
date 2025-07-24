#include <iostream>
#include <stack>
#include <string>

std::string infixToPostfix(const std::string& expression) {
    std::stack<char> stack;
    std::string postfix;
    for (char c : expression) {
        if (c >= 'a' && c <= 'z') {
            postfix += c;
        } else if (c == '(') {
            stack.push(c);
        } else if (c == ')') {
            while (stack.top() != '(') {
                postfix += stack.top();
                stack.pop();
            }
            stack.pop();
        } else {
            while (!stack.empty() && stack.top() != '(' && (c == '+' || c == '-' ? (stack.top() == '*' || stack.top() == '/') : false)) {
                postfix += stack.top();
                stack.pop();
            }
            stack.push(c);
        }
    }
    while (!stack.empty()) {
        postfix += stack.top();
        stack.pop();
    }
    return postfix;
}

int main() {
    std::string expression = "a+b*c";
    std::cout << "Postfix: " << infixToPostfix(expression) << std::endl;
    return 0;
}
