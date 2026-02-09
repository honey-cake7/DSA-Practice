#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    // for(int i = 0 ; i < n - 1 ; i++){ //  n - 1 passes
    //     //traverse
    //     for(int j = 0; j < n - 1 ; j++){ // n - 1 - i  to not check last element
    //         if(v[j]>v[j+1]) swap(v[j],v[j+1]);
    //     }
    // }
    //  optimization 1
    // for(int i = 0 ; i < n - 1 ; i++){ //  n - 1 passes
    //     //traverse
    //     for(int j = 0; j < n - 1 - i; j++){ // n - 1 - i  to not check last element
    //         if(v[j]>v[j+1]) swap(v[j],v[j+1]);
    //     }
    // }    
    // optimization 2
    bool flag = 1;
    for (int i = 0; i < n - 1; i++) { //  n - 1 passes
        //traverse
        for (int j = 0; j < n - 1 - i; j++) { // n - 1 - i  to not check last element
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                flag =  0;
            }
        }
        if(flag) break;
    }
    cout << "Vector elements: ";
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}