#include <iostream>
#include <unordered_set>

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

    void removeDuplicates() {
        std::unordered_set<int> set;
        Node* current = head;
        Node* prev = nullptr;
        while (current != nullptr) {
            if (set.find(current->data) != set.end()) {
                prev->next = current->next;
            } else {
                set.insert(current->data);
                prev = current;
            }
            current = current->next;
        }
    }

    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList list;
    list.append(10);
    list.append(20);
    list.append(10);
    list.append(30);
    list.append(20);
    list.append(40);
    std::cout << "Original List: ";
    list.printList();  // Output: 10 20 10 30 20 40
    list.removeDuplicates();
    std::cout << "List after removing duplicates: ";
    list.printList();  // Output: 10 20 30 40
    return 0;
}
