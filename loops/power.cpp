#include<iostream>
using namespace std;
int main () {
    float a,i,n,p = 1;
    bool flag = 1;
    cout<<"Enter the base: ";
    cin>>a;
    cout<<"Enter the power: ";
    cin>>n;
    if(n<0){
        flag=0;
        n=-n;
    }
    for(i=1;i<=n;i++){
        p=p*a;
    }
    if(flag) cout<<"the answer is"<<p;
    else cout<<1/p;
}