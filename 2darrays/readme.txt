(row,col)
declaration
int arr[3][4]; // 3 rows, 4 columns
// initialization   
int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};

arr[0][0] = 1; // first row, first column
// accessing elements   
int x = arr[1][2]; // x = 7, second row, third column
// iterating through a 2D array
for (int i = 0; i < 3; i++) { // iterate through rows
    for (int j = 0; j < 4; j++) { // iterate through columns
        cout << arr[i][j] << " "; // print each element
    }
    cout << endl; // new line after each row
}
int arr[][4] = { // rows can be inferred
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
}; // 3 rows, 4 columns columns are necessary

traversal 

printing transpose
void printTranspose(int arr[][4], int rows, int cols) {
    for (int j = 0; j < cols; j++) { // iterate through columns
        for (int i = 0; i < rows; i++) { // iterate through rows
            cout << arr[i][j] << " "; // print transposed element
        }
        cout << endl; // new line after each transposed row 
    }
}
storing transpose
void storeTranspose(int arr[][4], int transposed[][3], int rows, int cols) {
    for (int j = 0; j < cols; j++) { // iterate through columns
        for (int i = 0; i < rows; i++) { // iterate through rows
            transposed[j][i] = arr[i][j]; // store transposed element
        }   
        cout << endl; // new line after each transposed row
    }
}

vector of 2d are
vector<vector<int>> vec = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};

int row = vec.size(); // number of rows
int col = vec[0].size(); // number of columns