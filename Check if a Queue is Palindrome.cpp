#include <iostream>
#include <queue>
#include <stack>

bool isQueuePalindrome(std::queue<int> queue) {
    std::stack<int> stack;
    std::queue<int> tempQueue = queue;
    while (!tempQueue.empty()) {
        stack.push(tempQueue.front());
        tempQueue.pop();
    }
    while (!queue.empty()) {
        if (queue.front() != stack.top()) {
            return false;
        }
        queue.pop();
        stack.pop();
    }
    return true;
}

int main() {
    std::queue<int> queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(2);
    queue.push(1);
    std::cout << "Is queue palindrome? " << (isQueuePalindrome(queue) ? "Yes" : "No") << std::endl;
    return 0;
}
