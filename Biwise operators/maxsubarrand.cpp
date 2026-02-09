#include <iostream>
using namespace std;


int main() {
    int arr[] = {12,12,13,13,13,1,1,1,2,3,4};
    int ans = 0;
    int maxi = -1;
    int count = 0;
    for(int i = 0 ; i < 11 ; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
            count = 1;
        }
        else if(arr[i] == maxi){
            count++;
        }
        ans = max(ans,count);
    }
    cout<<ans;
}