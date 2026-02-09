#include <iostream>
#include <vector>
using namespace std;
void sort01(vector<int> &a) {
    int n = a.size();
    int noo = 0;
    int noz = 0;
    for(int i = 0 ; i < n ; i++) {
        if(a[i] == 0) noz++;
        else noo++;
    }
    for(int i = 0 ; i < n ; i++) {
        if(i<noz) a[i] = 0;
        else a[i] = 1;
    }
    // 2 times travelling in array
    
}
// for 1 time travelling in array
void twopointers(vector<int> &a){
    int i = 0;
    int j = a.size() - 1;
    while(j>i){
        if(a[i]==0) i++;
        if(a[j]==1) j--;
        
        else if(a[i]==1 & a[j]==0){
            a[i]=0;
            a[j]=1;
            i++;
            j--;
        }
    }
}



int main() {
    vector<int> a(5);
    for(int i = 0 ; i < 5 ; i++) {
        cin >> a[i];
    }
    twopointers(a);
    for(int i = 0 ; i < 5 ; i++) {
        cout << a[i];
    }
}