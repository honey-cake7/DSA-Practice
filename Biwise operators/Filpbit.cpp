#include <iostream>
using namespace std;



int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    int n = num;
    for(int i = 1 ; i <= 32; i<<=1){
        n = n | (n>>i);
    } 
    cout<<(n ^ num)<<endl; // using xor with all ones of same size
}