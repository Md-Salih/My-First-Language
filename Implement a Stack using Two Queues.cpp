#include <iostream>
#include <queue>

class Stack {
private:
    std::queue<int> queue1;
    std::queue<int> queue2;

public:
    void push(int element) {
        queue2.push(element);
        while (!queue1.empty()) {
            queue2.push(queue1.front());
            queue1.pop();
        }
        std::swap(queue1, queue2);
    }

    int pop() {
        if (queue1.empty()) {
            std::cout << "Stack underflow!" << std::endl;
            return -1;
        }
        int top = queue1.front();
        queue1.pop();
        return top;
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    std::cout << "Popped element: " << stack.pop() << std::endl;
    return 0;
}
