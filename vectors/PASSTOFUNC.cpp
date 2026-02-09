#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &a){ // without & it copys the values of vector and forms a new vector but using & it is pass by ref
    a[0] = 9;
}

int main(){
    vector<int> v;
    v.push_back(19);
    v.push_back(10);
    v.push_back(1);
    for(int i = 0 ; i<v.size(); i++){
        cout<<v[i];
    }
    cout<<endl;
    change(v);
    for(int i = 0 ; i<v.size(); i++){
        cout<<v[i];
    }
    
}