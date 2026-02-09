#include<bits/stdc++.h>
using namespace std;
void display(queue<int> &q) {
    int n = q.size();
    while (n > 0) {
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
        n--;
    }
    cout << '\n';
}
void rev(queue<int> &q) {
    stack<int> st;
    while(q.size() > 0) {
        int x = q.front();
        q.pop();
        st.push(x);
    }
    while(st.size() > 0) {
        int x = st.top();
        st.pop();
        q.push(x);
    }
}
int main () {
    queue<int> q;
    q.push(1);
    q.push(2);  
    q.push(3);
    q.push(4);
    display(q);
    rev(q);
    display(q);     
}