#include<iostream>
using namespace std;

class Node { // linked list node
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
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
void displayrev(Node* head) {
    if (head == NULL) {
        cout << "NULL";
        return;
    }
    displayrev(head->next);
    cout << "<-" << head->val << endl;

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
    Node* a = NULL;
    // Node *b = new Node(100);
    // Node *c = new Node(1000);
    // a->next = b;
    // b->next = c;
    // cout<<a->next->next->val;
    // displayrev(a);  
    // cout<<size(a); 
    display(a);
    insertAtEnd(a, 10000);
    display(a);
}