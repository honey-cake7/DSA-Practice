#include <iostream>
using namespace std;
int count_set_bit2(int n){
   return __builtin_popcount(n);
}

int max_po_2(int x){
    int temp; 
    while (x != 0){
        temp = x;
        x = x &(x - 1);
    }
    return temp;
}
int max_po_two(int n){
    for(int i = 1 ; i <= 16; i<<=1){
        n = n | (n>>i);
    }  
    return ((n + 1)>>1);
}
    


int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    cout<<max_po_2(num)<<endl;
    cout<<max_po_two(num)<<endl;
}