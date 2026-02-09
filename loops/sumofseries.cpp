#include<iostream>
using namespace std;
int main () {
    int i,n,sum=0;
    cout<<"Enter the limit: ";
    cin>>n;
    for(i=0;i<=n;i++){
        if(i%2==0)
        sum-=i;
        else sum+=i;
    }
    cout<<sum;
}