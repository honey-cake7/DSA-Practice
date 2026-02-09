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

class Linkedlist {
public:
    Node* head;
    Node* tail;
    int size;
    Linkedlist() {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val) {
        Node* temp = new Node(val);
        if (size == 0) {
            head = tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtBegin(int val) {
        Node* temp = new Node(val);
        if (size == 0) {
            head = tail = temp;
        }
        else {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insert(int val, int pos) {
        if (pos < 0 || pos > size) {
            cout << "Invalid idx" << endl;
            return;
        }
        Node* temp = new Node(val);
        if (pos == 0) {
            insertAtBegin(val);
            return;
        }
        if (pos == size) {
            insertAtEnd(val);
            return;
        }
        Node* p = head;
        for (int i = 1; i < pos; i++) {
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
        size++;
    }
    void deleteAtBegin() {
        if (size == 0) {
            cout << "Empty list\n";
            return;
        }
        if (size == 1) {
            delete head;
            tail = head = NULL;
        }
        Node* temp = head;
        head = head->next;
        size--;
        delete temp;
    }
    void deleteAtend() {
        if (size == 0) {
            cout << "Empty list\n";
            return;
        }
        if (size == 1) {
            delete head;
            tail = head = NULL;
        }
        Node* p = head;

        while (p->next->next != NULL) {
            p = p->next;
        }
        delete p->next;
        p->next = NULL;
        tail = p;
        size--;
    }
    void deleteAtIdx(int pos) {
        if (size == 0) {
            cout << "List is empty\n";
        }
        if (pos < 0 || pos >= size) {
            cout << "Invalid idx" << endl;
            return;
        }
        if (pos == 0) deleteAtBegin();
        else if (pos == size - 1) deleteAtend();
        else {
            Node* p = head;
            for (int i = 1; i < pos; i++) {
                p = p->next;
            }
            Node* temp = p->next;
            p->next = p->next->next;
            delete temp;
        }
        size--;
    }
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    int getAtIdx(int idx) {
        if (idx < 0 || idx >= size) {
            cout << "Invalid idx\n";
            return -1;
        }
        Node* p = head;
        for (int i = 0; i < idx; i++) {
            p = p->next;
        }
        return p->val;
    }
};
int main() {
    Linkedlist ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtBegin(1);
    ll.display();
    ll.insert(70, 2);
    ll.insert(12, 3);
    ll.display();
    cout << ll.getAtIdx(3) << endl;
    ll.deleteAtBegin();
    ll.display();
    cout << ll.size << endl;
    ll.deleteAtend();
    ll.display();
    cout << ll.size << endl;
    ll.deleteAtIdx(2);
    ll.display();
    cout << ll.size << endl;  

}