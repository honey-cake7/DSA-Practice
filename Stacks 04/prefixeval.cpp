   #include<bits/stdc++.h>
using namespace std;


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
    string s = "*/+8*336-91";
    stack<int> val;
    for (int i = s.length() - 1;i >= 0; i--) {
        char c = s[i];
        if (isdigit(c)) {
            val.push((c - 48));
        }
        else {
            int val1 = val.top() ; 
            val.pop();
            int val2 = val.top() ; 
            val.pop();
            val.push(solve(val1,val2,c));
        }
    }
    
    cout << val.top() << endl;
    cout << (8+3*3)/6*(9-1) ;
}