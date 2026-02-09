#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, m, p, q;
    cout << "Enter rows and columns of first matrix: ";
    cin >> m >> n;

    vector<vector<int>> a(m, vector<int>(n));


    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
    int tne = n * m;
    int count = 0;
    //spiral
    int minr = 0, minc = 0;
    int maxr = m - 1, maxc = n - 1;
    while (minr <= maxr && minc <= maxc) {
        //right
        for (int j = minc; j <= maxc && count < tne; j++) {
            cout << a[minr][j] << " ";
            count++;
        }
        minr++;
        // down
        for (int i = minr; i <= maxr && count < tne; i++) {
            cout << a[i][maxc] << " ";
            count++;
        }
        maxc--;
        //left
        for (int j = maxc; j >= minc && count < tne; j--) {
            cout << a[maxr][j] << " ";
            count++;
        }
        maxr--;
        //top
        for (int i = maxr; i >= minr && count < tne; i--) {
            cout << a[i][minc] << " ";
            count++;
        }
        minc++;
    }

}