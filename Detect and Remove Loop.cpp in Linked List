#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int d):data(d),next(NULL){}
};

void detectAndRemoveLoop(Node* head) {
    Node *slow=head, *fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) break;
    }

    if(slow!=fast){
        cout<<"No loop detected\n";
        return;
    }

    slow=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
    cout<<"Loop removed successfully!\n";
}

int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=head->next; // Loop created

    detectAndRemoveLoop(head);
}
