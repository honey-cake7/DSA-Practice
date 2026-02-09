#include <iostream>
using namespace std;
int main() {
    int arr[9] = {1,2,4,5,9,15,18,21,24};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 20; // lower bound is 9
    // for(int i=0; i<n ; i++){
    //     if(arr[i]>x){
    //         cout<<arr[i - 1];
    //         break;
    //     }
    int low = 0, high = n - 1 , flag = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            cout<<arr[mid - 1];
            flag = 1;
            break;
        } 
        else if(arr[mid]>x) {
            high = mid - 1;
        }
        else low  = mid + 1;
    }
    if (flag == 0)
        cout << arr[high];
    else
        cout << "No lower bound found";


    
}