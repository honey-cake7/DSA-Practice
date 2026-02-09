#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"Three digit number ";
    } 
    else{
        cout<<"Not a three digit number";
    }
}