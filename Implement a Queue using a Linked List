#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(int data) {
        Node* newNode = new Node(data);
        if (rear == nullptr) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue() {
        if (front == nullptr) {
            std::cout << "Queue underflow!" << std::endl;
            return -1;
        }
        int data = front->data;
        Node* temp = front;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
        return data;
    }

    int getFront() {
        if (front == nullptr) {
            std::cout << "Queue is empty!" << std::endl;
            return -1;
        }
        return front->data;
    }
};

int main() {
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    std::cout << "Front element: " << queue.getFront() << std::endl;
    std::cout << "Dequeued element: " << queue.dequeue() << std::endl;
    return 0;
}
