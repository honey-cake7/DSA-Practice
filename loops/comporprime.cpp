#include<iostream>
using namespace std;
int main (){
    int n,f=0;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=2;i<=(n-1);i++){
        if(n%i==0){
         f=1; 
         break;    
        }
        }
        if(n==1)cout<<n <<" is neither prime nor composite";
        else if(f==1)cout<<n <<" is a composite number";
                  else cout<<n<<" is a prime number";
}
