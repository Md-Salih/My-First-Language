#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* merge(Node* a, Node* b) {
    if (a == nullptr)
        return b;
    if (b == nullptr)
        return a;
    if (a->data <= b->data) {
        a->next = merge(a->next, b);
        return a;
    } else {
        b->next = merge(a, b->next);
        return b;
    }
}

Node* mergeSort(Node* head) {
    if (head == nullptr || head->next == nullptr)
        return head;
    Node* mid = head;
    Node* fast = head->next;
    while (fast && fast->next) {
        mid = mid->next;
        fast = fast->next->next;
    }
    Node* midNext = mid->next;
    mid->next = nullptr;
    Node* left = mergeSort(head);
    Node* right = mergeSort(midNext);
    return merge(left, right);
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node{5};
    head->next = new Node{2};
    head->next->next = new Node{8};
    head->next->next->next = new Node{3};
    head->next->next->next->next = new Node{1};
    cout << "Original list: ";
    printList(head);
    head = mergeSort(head);
    cout << "Sorted list: ";
    printList(head);
    return 0;
}

