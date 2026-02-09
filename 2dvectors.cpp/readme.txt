increase your rows
variable coulmns
// 2D vectors are vectors of vectors
// They can be used to create a matrix-like structure
#include <iostream>
#include <vector>   
using namespace std;
int main(){
    vector<int> v1{1, 2, 3, 4}; // Initializing a vector with 4 elements
    vector<int> v2(5); // 5 elements initialized to 0
    vector<int> v3(6, 10); // 6 elements initialized to 10
    vector<vector<int>> v;
    v.push_back(v1); // Adding a vector to the 2D vector
    v.push_back(v2); // Adding another vector to the 2D vector
    v.push_back(v3); // Adding a third vector to the 2D vector
    v[0].push_back(1); // Adding an element to the first vector
    cout << "Size of v1: " << v[0].size() << endl; // Output the size of the first vector
    cout<<v[0][0]<<endl; // Output the first element of the first vector
    cout<<v[1][10] //invalid index, will cause an error
}   

// In functions, passing 2D arrays requires the size to be specified

// example of a function that takes a 2D array
void print2DArray(int arr[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

//in function passing a 2D vector d0es not require size specification
void print2DVector(vector<vector<int>>& vec) {
    for (const auto& row : vec) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

declaration of a 2D vector
vector<vector<int>> vec(3, vector<int>(4)); // 3 rows, 4 columns initialized to 0
// or
vector<vector<int>> vec(3, vector<int>(4, 1)); // 3
// rows, 4 columns initialized to 1

cout << "Size of vec: " << vec.size() << endl; // Output the number of rowsq 

cout << "Size of first row: " << vec[0].size() << endl; // Output the number of columns in the first row