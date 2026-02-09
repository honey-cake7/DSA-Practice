#include <iostream>
using namespace std;
int main() {
    int arr[9] = { 1,2,2,3,3,3,5,5,8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    int lo = 0;
    int hi = n - 1;
    int flag = 0;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (arr[mid] == x){
            if(arr[mid-1]!=x){
                flag = 1;
                cout<<mid;
                break;
            }
            else { 
                hi = mid - 1;
                
            }
        }
        else if (arr[mid] < x) lo = mid + 1;
        else if (arr[mid] > x) hi = mid - 1;

    }
    if(!flag) cout<<-1;


}