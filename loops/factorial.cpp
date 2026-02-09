#include<iostream>
using namespace std;
int main () {
    int i,n,sum=1;
    cout<<"Enter the limit: ";
    cin>>n;
    for(i=1;i<=n;i++){
        sum*=i;
    }

    cout<<sum;
}