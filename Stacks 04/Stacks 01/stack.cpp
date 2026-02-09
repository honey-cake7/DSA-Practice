#include<bits/stdc++.h>
using namespace std;
// push at any idx (0 = top). If idx >= size, value is pushed to bottom.

void display(stack<int>& st) {
    if (st.size() == 0) return;
    int x = st.top();
    cout << x << endl;
    st.pop();
    display(st);
    // for cout << x <<  endl;
    st.push(x);
}
void pushAtBottom(stack<int> &st,int val) {
    if (st.size() == 0){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtBottom(st,val);
    st.push(x);
}
void reverse(stack<int> &st) {
    if(st.size() == 1) return;
    int x = st.top();
    st.pop();
    reverse(st);
    pushAtBottom(st,x);
}

void pushAt(stack<int>& st, int val, int idx) {
    if (idx <= 0 || st.empty()) {
        st.push(val);
        return;
    }
    int topVal = st.top(); st.pop();
    pushAt(st, val, idx - 1);
    st.push(topVal);
}
int main() {
    stack<int> st;
    cout << st.size() << endl;
    st.push(16);
    st.push(15);
    st.push(14);
    st.push(13);
    st.push(12);
    st.push(11);
    // printing in reverse order
    // while(!st.empty()) {
    //     cout << st.top() << endl;
    //     st.pop();
    // }
    //using extra stack to preservve elemnets
    // stack<int> temp;
    // while(!st.empty()) {
    //     cout << st.top() << endl;
    //     temp.push(st.top());
    //     st.pop();
    // }
    // while(!temp.empty()) {
    //     cout << temp.top() << endl;
    //     st.push(temp.top());
    //     temp.pop();
    // }

    display(st);
    reverse(st);
    display(st);

}
