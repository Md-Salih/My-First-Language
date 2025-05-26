#include <iostream>
#include <stack>
#include <string>

std::string reverseString(const std::string& str) {
    std::stack<char> stack;
    for (char c : str) {
        stack.push(c);
    }
    std::string reversedStr;
    while (!stack.empty()) {
        reversedStr += stack.top();
        stack.pop();
    }
    return reversedStr;
}

int main() {
    std::string str = "Hello";
    std::cout << "Reversed string: " << reverseString(str) << std::endl;
    return 0;
}
