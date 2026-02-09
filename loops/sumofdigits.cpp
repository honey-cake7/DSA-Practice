#include<iostream>
using namespace std;
int main (){
    int i,sum=0,n;
    cout<<"Enter a number";
    cin>>n;
    for(i=0;n!=0;i++){
        sum+=n%10;
        n=n/10;
    }
    cout<<sum;
}