#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number";
    cin>>n;
    // if(n%5==0 && n%3==0){
    //     cout<<"Divisible by 3 and 5";
    // }
    // else{
    //     cout<<"Not Divisible by 3 and 5";   
    // } nesteddd+++
    if(n%5==0){
        if (n%3==0){
            cout<<"The number is divisible by 3 and 5";     
        }
        else{
           cout<<"Not Divisible by 3 and 5"; 
        }
    }
        else{
           cout<<"Not Divisible by 3 and 5"; 
        }  

} 
    

