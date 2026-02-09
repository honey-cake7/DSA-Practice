#include<iostream>
using namespace std;
int main (){
    int i,n;
    cout<<"Enter a number";
    cin>>n;
    int a=n;
    for(i=0;n!=0;i++){
        n=n/10;
    }
    if(a==0)cout<<"1 digits are present in number";
    else
    cout<<i<<" digits are present in the number";
} 