#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    // formation of prefix sum
    for(int i = 1 ; i < n ; i++){
        arr[i] += arr[i-1];
    }
    //check if any x exist
    bool flag = 0;
    int i = 1;
    for( i = 1 ; i < n ; i++){
        if(2*arr[i] == arr[n-1]){
            flag = 1;
            break;
        }
    }
    if(flag) cout<<"yes at"<<i;
    else cout<<"NO";
}