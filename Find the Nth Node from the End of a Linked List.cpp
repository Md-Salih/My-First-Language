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

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void append(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    int nthNodeFromEnd(int n) {
        Node* main = head;
        Node* ref = head;
        for (int i = 0; i < n; i++) {
            if (ref == nullptr) {
                return -1;  // n is greater than the length of the list
            }
            ref = ref->next;
        }
        while (ref != nullptr) {
            main = main->next;
            ref = ref->next;
        }
        return main->data;
    }
};

int main() {
    LinkedList list;
    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);
    list.append(50);
    int n = 2;
    std::cout << "Nth node from end: " << list.nthNodeFromEnd(n) << std::endl;  // Output: 40
    return 0;
}
