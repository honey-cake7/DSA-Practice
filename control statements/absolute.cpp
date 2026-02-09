#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Number:";
    int n;
    cin>>n;
    if (n<0){
        n=-n;
    }
    cout<<n;
    // if(n>0){
    //     cout<<"the absolute value is"<<n;
    // }
    // else{
    //     cout<<"the absolute value is"<<-n;
    // }
}