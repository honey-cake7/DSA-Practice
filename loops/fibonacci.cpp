#include<iostream>
using namespace std;
int main () {
    int a,i,n,f1=0,f2=1;
    cout<<"Enter the limit: ";
    cin>>n;
     if (n==1 || n==2){
      if(n==1)
      {cout<<f1;}
      else {cout<<f1<<endl<<f2<<endl;}
      }
      else {for(i=1 ; i<=n ; i++){
           a= f1 +f2;
             f1= f2;
             f2= a;
             cout<<a<<endl;
             }
    }    
} 