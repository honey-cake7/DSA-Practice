#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i) {
    int smallest = i; 
    int left = 2*i + 1; 
    int right = 2*i + 2; 

    if(left < n && arr[left] < arr[smallest])
        smallest = left;
    if(right < n && arr[right] < arr[smallest])
        smallest = right;
    if(smallest != i) {
        swap(arr[i], arr[smallest]);
        heapify(arr, n, smallest);
    }
}

int main() {
    int arr[] = {10, 20, 15, 30, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    // Heapify process
    for(int i = n/2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
      }
        
    // Displaying the heapified array
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";  
    return 0;
}