#include <iostream>
using namespace std;
int main(){
    int p=1,q=2,r=2;
    cout<<(p==(q==r));
}// (p==q)==r->0 this is always
// p==(q==r)->1 this only when specified
