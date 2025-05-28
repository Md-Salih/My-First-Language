#include <iostream>
#include <stack>
#include <string>

int evaluatePostfix(const std::string& expression) {
    std::stack<int> stack;
    for (char c : expression) {
        if (c >= '0' && c <= '9') {
            stack.push(c - '0');
        } else {
            int operand2 = stack.top();
            stack.pop();
            int operand1 = stack.top();
            stack.pop();
            switch (c) {
                case '+':
                    stack.push(operand1 + operand2);
                    break;
                case '-':
                    stack.push(operand1 - operand2);
                    break;
                case '*':
                    stack.push(operand1 * operand2);
                    break;
                case '/':
                    stack.push(operand1 / operand2);
                    break;
            }
        }
    }
    return stack.top();
}

int main() {
    std::string expression = "23+4*";
    std::cout << "Result: " << evaluatePostfix(expression) << std::endl;
    return 0;
}
