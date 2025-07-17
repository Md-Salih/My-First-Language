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

    bool isEmpty() {
        return head == nullptr;
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
};

int main() {
    LinkedList list;
    std::cout << "Is List Empty? " << (list.isEmpty() ? "Yes" : "No") << std::endl;  // Output: Yes
    list.append(10);
    std::cout << "Is List Empty? " << (list.isEmpty() ? "Yes" : "No") << std::endl;  // Output: No
    return 0;
}
