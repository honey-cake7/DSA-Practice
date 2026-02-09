 #include <iostream>
using namespace std;


int main() {
    int arr[] = {1,1,2,2,3,3,4,5,5,6,6};
    int n = 12 ;
    int res = 0; //5^5 = 0 
    // 0^6 = 6
    // 1^1 = 0
    for(int i = 0 ; i < n ; i++){
        res = res^arr[i];
    }
    cout<<res;
}