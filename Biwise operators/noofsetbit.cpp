#include <iostream>
using namespace std;
int count_set_bit2(int n){
   return __builtin_popcount(n);
}

int count_set_bit(int n){
    // brian algorithm
    /// int n and n-1 there is some part same and next part flipped
    // n last set bit from lsb including that everthing is flipped
    // 16 [1 0 0 0 0] 
    // 15 [0 1 1 1 1] flipped from last set bit
    // 24 1 [1 0 0 0]
    // 23 1 [0 1 1 1] flipped
    // so taking their and will result and of same number give same thing and fillped will give zero which will always eliminate 1 set bit as flipping starts from last set bit
    int count = 0;;
    while(n > 0){
        count++;
        n = (n & (n - 1));
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    cout<<count_set_bit(num)<<endl;
    cout<<count_set_bit2(num);
     
}