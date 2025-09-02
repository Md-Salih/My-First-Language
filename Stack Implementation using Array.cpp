#include <iostream>
using namespace std;

#define MAX 5
int stack[MAX], top = -1;

void push(int x) {
    if (top == MAX - 1) {
        cout << "Stack Overflow\n";
        return;
    }
    stack[++top] = x;
    cout << x << " pushed\n";
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
        return;
    }
    cout << stack[top--] << " popped\n";
}

void display() {
    if (top == -1) {
        cout << "Stack is empty\n";
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++) cout << stack[i] << " ";
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
}
#include <iostream>
using namespace std;

#define MAX 5
int stack[MAX], top = -1;

void push(int x) {
    if (top == MAX - 1) {
        cout << "Stack Overflow\n";
        return;
    }
    stack[++top] = x;
    cout << x << " pushed\n";
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
        return;
    }
    cout << stack[top--] << " popped\n";
}

void display() {
    if (top == -1) {
        cout << "Stack is empty\n";
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++) cout << stack[i] << " ";
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
}
