#include<bits/stdc++.h>
using namespace std;

class Stack{
    int arr[100];
    int idx;
public:
    Stack(){
        idx = -1;
    }
    void push(int x) {
        if(idx == sizeof(arr)/sizeof(arr[0]) - 1) return;
        arr[++idx] = x;
    }
    void pop() {
        if(idx == -1) return;
        idx--;
    }
    int top() {
        if(idx == -1) return -1;
        return arr[idx];
    }
    int size() {
        return idx+1;
    }
};

int main() {
    Stack s;
    s.push(19);
    cout << s.top();
}