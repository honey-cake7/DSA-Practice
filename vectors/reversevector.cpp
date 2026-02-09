#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> a){
    for(int i = 0 ; i < a.size() ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i , int j , vector<int> &a){
    
   while(i <= j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    i++;
    j--;
   }
}

int main() {
    vector<int> a;
    a.push_back(10);
    a.push_back(9);
    a.push_back(8);
    a.push_back(7);
    a.push_back(6);
    a.push_back(5);
    display(a);
    // vector<int> b(a.size());
    // for(int i = 0  ; i < a.size(); i++){
    //     b[i] = a[a.size() - i - 1];
    // }
    // display(b);
    //without using extra vector
    
   reversepart(1,4,a);
   display(a);
}