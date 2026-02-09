#include <iostream>
#include <vector>
using namespace std;

void  twosum(vector<int> a, int x) {
    for(int i = 0 ; i < a.size() ; i++) {
        for(int j = i ; j < a.size() ; j++) {
        if(x == a.at(i) + a.at(j)){
            cout<<i<<","<<j<<endl;
        }
    }
    }


}
int main() {
    int x;
    cout << "target= ";
    cin >> x;
    vector<int> a;
    int n;
    cout << "enter size=";
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        int z;
        cin >> z;
        a.push_back(z);
    }
    twosum(a, x);


    return 0;
}