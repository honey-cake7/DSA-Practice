#include <iostream>
using namespace std;
int main() {
    // int , float,bool, cha- typecasting
    // float x = 1.2;
    // int y = (int)x;
    // cout << y;
    // to change from one data type to other
    // char ch = 'B';
    // cout << (int)ch - 64;
    // half of integer
    // int x;
    // cin >> x;
    // float y = (float)x;
    // cout << y / 2;
    // to print the fractional part of float
    float x;
    cin >> x;           // x=8.7
    int y = (int)x;     // y=8 int
    // sooo
    if(y < 0)
        y = y - 1;
    float z = (float)y; // y=8 float
    cout << x - z; // one big problem is that int just takes the integral value sooo
}