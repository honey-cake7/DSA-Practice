#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number";
    cin>>n;
    // if((n%5==0 || n%3==0) && n%15!=0){
    //     cout<<"Divisible by 3 or 5";
    //     cout<<"but not by 15";
    // }
    // else{
    //     cout<<"Not Divisible by 3 or 5";   
    //     cout<<" And also not by 15";
    // }
    if (n%5==0||n%3==0){
        if(n%15==0){
            cout<<"The condition is not satisfied";
        }
        else{
           cout<<"the condition is satisfied";
        }
    }
    else{
            "the condition is  not satisfied";
        }
    
}
