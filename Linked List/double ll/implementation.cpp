#include<iostream>
using namespace std;

class Node { // linked list node
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void displayrev(Node* tail) {
    while(tail) {
        cout << tail->val << " " ;
        tail = tail->prev;
    }

}

int size(Node* head) {
    Node* temp = head;
    int count = 0;
    while (temp != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}
void insertAtEnd(Node*& head, int n) {
    Node* p = head;
    Node* temp = new Node(n);
    if (head == NULL) {
        head = temp;
        return;
    }
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = temp;
}
int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
        a->next = b;
        b->prev = a;
        b->next = c;
        c->prev = b;
        c->next = d;
        d->prev = c;
        d->next = e;
        e->prev = d;
        display(a);
        displayrev(e);
}