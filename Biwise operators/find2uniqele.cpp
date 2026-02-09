#include <iostream>
using namespace std;
void find(int* arr, int n) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        res = res ^ arr[i];
    }
    int temp = res;
    int k = 0;
    while (true) {
        if ((temp & 1) == 1){ // finding kth set bit by doing its and by 1  
            break;
        }
        k++;
    }
    int res2 = 0;
    for (int i = 0; i < n; i++) {
        int num = arr[i];   
        if(((num>>k) & 1) == 1){ // to check if kth bit is set bit or nor
                res2 ^= num;// this gives us the first unknown number as all num with kth set bit are used and only one result in which kth set bit is there
        }
    }
    cout<<res2<<endl;
    res = res2^res; // this gives other result
    cout<<res<<endl;
}

int main() {
    int arr[] = { 1,1,2,2,3,3,4,5,5,6,6,7 };
    int n = 12;
    find(arr,n);
}