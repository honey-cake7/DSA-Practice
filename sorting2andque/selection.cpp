#include <iostream>
#include<climits>
#include <vector>
using namespace std;

// Function to perform selection sort

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements:\n";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for(int i = 0; i < n - 1;i++){
        int min =INT_MAX;
        int min_idx= -1;
        for(int j = i; j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                min_idx = j;
            }
            swap(arr[i],arr[min_idx]);
        }
    }

    cout << "Sorted array:\n";
    for(int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}