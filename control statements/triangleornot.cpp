#include<iostream>
using namespace std;
int main (){
    int a,b,c;
       cout<<"Enter side a";
    cin>>a;
      cout<<"Enter side b";
    cin>>b;
      cout<<"Enter side c";
    cin>>c;
    if((a+b>c) && (b+c>a) && (c+a>b)){
         cout<<a<<" "<<b<<" "<<c <<" are  the sides of triangle";

    }
    else{
         cout<<a<<" "<<b<<" "<<c <<" are not the sides of triangle";
    }
}