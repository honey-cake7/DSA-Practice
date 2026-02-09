#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, m, p, q;
    cout << "Enter rows and columns of first matrix: ";
    cin >> m >> n;

    vector<vector<int>> mat1(m, vector<int>(n));


    cout << "Enter elements of first matrix:" << endl;
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
            cin >> mat1[i][j];

    // wave print
    for(int i = 0 ; i < m ; i++) {
        if(i % 2 == 0) {
            for(int j = 0 ; j < n ; j++) {
                cout << mat1[i][j] << " ";
            }
        }
         else {
            for(int j = n - 1 ; j >= 0 ; j--) {
                cout << mat1[i][j] << " ";
            }

        }
    }
}