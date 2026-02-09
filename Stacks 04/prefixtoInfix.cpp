   #include<bits/stdc++.h>
using namespace std;


string solve(string val1,string val2, char ch) {
    string s ="";
     s += val1;
     s.push_back(ch);
     s +=val2;
     return s;
}


int main() {
    string s = "*/+8*336-91";
    stack<string> val;
    for (int i = s.length() - 1;i >= 0; i--) {
        char c = s[i];
        if (isdigit(c)) {
            val.push(to_string(c - 48));
        }
        else {
            string val1 = val.top() ; 
            val.pop();
            string val2 = val.top() ; 
            val.pop();
            val.push(solve(val1,val2,c));
        }
    }
    
    cout << val.top() << endl;
    cout << 8+3*3/6*9-1 ;
}