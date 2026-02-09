#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> a;
    int x;
    cin >> x;
    for(int i = 0 ; i < 5 ; i++) {
        int b;
        cin >> b;
        a.push_back(b);
    }
    int idx = -1;
    for(int i = a.size() - 1 ; i >= 0 ; i--) {
        if(x == a.at(i)) {
            idx = i + 1;
            break;
        } 
    }
    cout<<idx;





}