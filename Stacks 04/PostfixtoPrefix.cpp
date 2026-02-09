   #include<bits/stdc++.h>
using namespace std;

string solve(string val1,string val2, char ch) {
    string s ="";
    s.push_back(ch);
     s += val1;
     
     s +=val2;
     return s;
}


int main() {
    string s = "833*+6/91-*";
    stack<string> val;
    for (int i = 0;i < s.length(); i++) {
        char c = s[i];
        if (isdigit(c)) {
            val.push(to_string(c - 48));
        }
        else {
            string val2 = val.top() ; 
            val.pop();
            string val1 = val.top() ; 
            val.pop();
            val.push(solve(val1,val2,c));
        }
    }
    
    cout << val.top() << endl;
    cout << "8+3*3/6*9-1"  ;
}