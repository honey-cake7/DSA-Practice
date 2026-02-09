#include<bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

string solve(string val1,string val2,char c) {
    string s = "";
    // op val1 val2 for prefix
    s.push_back(c);
    s+=val1;
    s+=val2;
    return s;
}


int main() {
    string s = "(8+3*3)/6*(9-1)";
    stack<string> val;
    stack<char> op;
    for (int i = 0;i < s.length(); i++) {
        char c = s[i];
        if (isdigit(c)) {
            val.push(to_string(c - 48));
        }
        else {
            if (c == '(') {
                op.push(c);
            }
            else if (c == ')') {
                while (op.top() != '(') {
                    char oper = op.top(); op.pop();
                    string v2 = val.top(); val.pop();
                    string v1 = val.top(); val.pop();
                    val.push(solve(v1, v2, oper));
                }
                op.pop();
            }
            else if (precedence(op.top()) < precedence(c)) {
                op.push(c);
            }
            else {
                while (op.size() > 0 && precedence(op.top()) >= precedence(c)) {
                    char oper = op.top(); op.pop();
                    string v2 = val.top(); val.pop();
                    string v1 = val.top(); val.pop();
                    val.push(solve(v1, v2, oper));
                }
                op.push(c);
            }
        }
    }
    while (op.size() > 0) {
        char oper = op.top(); op.pop();
                    string v2 = val.top(); val.pop();
                    string v1 = val.top(); val.pop();
                    val.push(solve(v1, v2, oper));
    }
    cout << val.top() << endl;
    cout << "(8+3*3)/6*(9-1)" ;
}