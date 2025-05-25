#include <iostream>
#include <stack>
#include <string>

bool isBalanced(const std::string& str) {
    std::stack<char> stack;
    for (char c : str) {
        if (c == '(' || c == '{' || c == '[') {
            stack.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (stack.empty()) {
                return false;
            }
            char top = stack.top();
            stack.pop();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return stack.empty();
}

int main() {
    std::string str1 = "((()))";
    std::string str2 = "(()))";
    std::string str3 = "{[()]}";
    std::string str4 = "{[(]}";

    std::cout << "Is " << str1 << " balanced? " << (isBalanced(str1) ? "Yes" : "No") << std::endl;
    std::cout << "Is " << str2 << " balanced? " << (isBalanced(str2) ? "Yes" : "No") << std::endl;
    std::cout << "Is " << str3 << " balanced? " << (isBalanced(str3) ? "Yes" : "No") << std::endl;
    std::cout << "Is " << str4 << " balanced? " << (isBalanced(str4) ? "Yes" : "No") << std::endl;

    return 0;
}
