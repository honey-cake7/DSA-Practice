#include <iostream>
#include<climits>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements:\n";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for(int i = 1; i < n ; i++){
        int j = i;
        while(arr[j]<arr[j-1] && j>=1){
                swap(arr[j],arr[j-1]);
            j--;
        }
    }
     cout << "Sorted array:\n";
    for(int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}