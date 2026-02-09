#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of r znd c: ";
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    //for making transpose swap elem with upper triangular matrix or lower

    for(int i = 0; i < n; i++) {
        for(int j = i+1 ; j < n; j++) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    for (int i = 0; i < n; i++) { // iterate through rows
    for (int j = 0; j < n; j++) { // iterate through columns
        cout << a[i][j] << " "; // print each element
    }
    cout << endl; // new line after each row
}




    return 0;
}