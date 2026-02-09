#include<bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

int solve(int val1, int val2, int ch) {
    char op = static_cast<char>(ch);
    switch (op) {
    case '+': return val1 + val2;
    case '-': return val1 - val2;
    case '*': return val1 * val2;
    case '/': return val2 != 0 ? val1 / val2 : 0;
    case '^': {
        if (val2 < 0) return 0;
        int res = 1;
        for (int i = 0; i < val2; ++i) res *= val1;
        return res;
    }
    default: return 0;
    }
}

int main() {
    string s = "(8+3*3)/6*(9-1)";
    stack<int> val;
    stack<char> op;
    for (int i = 0;i < s.length(); i++) {
        char c = s[i];
        if (isdigit(c)) {
            val.push(c - 48);
        }
        else {
            if (c == '(') {
                op.push(c);
            }
            else if (c == ')') {
                while (op.top() != '(') {
                    char oper = op.top(); op.pop();
                    int v2 = val.top(); val.pop();
                    int v1 = val.top(); val.pop();
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
                    int v2 = val.top(); val.pop();
                    int v1 = val.top(); val.pop();
                    val.push(solve(v1, v2, oper));
                }
                op.push(c);
            }
        }
    }
    while (op.size() > 0) {
        char oper = op.top(); op.pop();
        int v2 = val.top(); val.pop();
        int v1 = val.top(); val.pop();
        val.push(solve(v1, v2, oper));
    }
    cout << val.top() << endl;
    cout << (8+3*3)/6*(9-1) ;
}