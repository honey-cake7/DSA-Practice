#include<iostream>
using namespace std;
int main (){
    int i,r=0,n;
    cout<<"Enter a number";
    cin>>n;
    for(i=0;n!=0;i++){
        r=r*10+n%10;
        n=n/10;
    }
    cout<<r;
}