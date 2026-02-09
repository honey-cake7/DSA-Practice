#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
    Node() : data(0), next(nullptr) {}
};

class stack{
    private:
        Node* head;
        int sz;

    public:
        stack() : head(nullptr), sz(0) {}
        ~stack() {
            while (head) {
                Node* tmp = head;
                head = head->next;
                delete tmp;
            }
        }

        void push(int val) {
            Node* n = new Node(val);
            n->next = head;
            head = n;
            ++sz;
        }

        int pop() {
            if (!head) {
                cout << "Stack underflow\n";
                return INT_MIN;
            }
            int val = head->data;
            Node* tmp = head;
            head = head->next;
            delete tmp;
            --sz;
            return val;
        }

        int top() const {
            if (!head) {
                cout << "Stack is empty\n";
                return INT_MIN;
            }
            return head->data;
        }

        bool empty() const { return head == nullptr; }
        int size() const { return sz; }
        void print(Node* temp){
            if(temp == NULL) return;
            print(temp->next);
            cout << temp->data << " ";
        }
        void display() {
            Node* curr = head;
            print(curr);
            cout << endl;
        }
};