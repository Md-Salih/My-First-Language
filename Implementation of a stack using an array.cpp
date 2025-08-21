#include <iostream>

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    Stack(int capacity) {
        this->capacity = capacity;
        this->top = -1;
        this->arr = new int[capacity];
    }

    void push(int element) {
        if (top == capacity - 1) {
            std::cout << "Stack overflow!" << std::endl;
            return;
        }
        arr[++top] = element;
    }

    int pop() {
        if (top == -1) {
            std::cout << "Stack underflow!" << std::endl;
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (top == -1) {
            std::cout << "Stack is empty!" << std::endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack stack(5);
    stack.push(10);
    stack.push(20);
    stack.push(30);
    std::cout << "Top element: " << stack.peek() << std::endl;  // Output: 30
    std::cout << "Popped element: " << stack.pop() << std::endl;  // Output: 30
    return 0;
}
