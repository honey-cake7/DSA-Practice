#include<iostream>
using namespace std;
int main (){
    int n1,n2,n3;
    cout<<"Enter a number1";
    cin>>n1;
      cout<<"Enter a number2";
    cin>>n2;
      cout<<"Enter a number3";
    cin>>n3;

    // if(n1>n2 && n1>n3){
    //     cout<<n1<<"is greatest among 3";
    // }
    // if(n2>n1 && n2>n3){
    //     cout<<n3<<"is greatest among 3";
    // }
    // if(n3>n1 && n3>n2){
    //     cout<<n3<<"is greatest among 3";
    // } 
    // nested
    if(n1>n2){
       if(n1>n3){
        cout<<n1<<" is greatest among all";
       }
       else {
        cout<<n3<<" is greatest among all";
       }
    }
    else { 
      if (n2>n3){
      cout<<n2<<" is greatest among all";
    } 
    else{
      cout<<n3<<" is greatest among all";
    }
    }
    }


