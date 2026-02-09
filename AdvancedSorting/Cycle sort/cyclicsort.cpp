#include<iostream>
#include<vector>
using namespace std;

int main() {
    int v[] = {4,1,6,3,2,5};
    int n = sizeof(v) / sizeof(v[0]);
    for (int i = 0; i < n;i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    // cycle sort
    int i = 0;
    while(i<n){
        int correct_idx = v[i] - 1;
        if(i==correct_idx) i++;
        else swap(v[i],v[correct_idx]);
    }
    for(int i = 0 ; i < n ;i++){
        cout<<v[i]<<" ";
    } 
}