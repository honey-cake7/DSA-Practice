#include<iostream>
#include<string>
using namespace std;
int gcd(int a, int b){
    for(int i = min(a,b); i >= 2; i--){
        if(a%i==0 && b%i == 0) return i;

    }
    return 1;
}
int gcdeuclidian(int a,int b){
    if(a==0) return b;
    gcdeuclidian(b%a,a);
}



int main (){ 
    int a = 40;
    int b = 52;
    cout<<gcdeuclidian(a,b);
}