#include <iostream>
using namespace std; 
void printArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
// main function to demonstrate array usage
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // calculate size of array
    printArray(arr, size); // pass array to function
    return 0;
}
//arr and a points to the same memory location
// so we can use either name to access the array elements
// array is a pointer to the first element of the array
// so we can use pointer arithmetic to access the elements
//sizeof a return the size of pointer, not the size of the array
//so we need ot pass the size of the array to the function
