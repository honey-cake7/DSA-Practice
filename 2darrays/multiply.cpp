#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, p, q;
    cout << "Enter rows and columns of first matrix: ";
    cin >> m >> n;
    cout << "Enter rows and columns of second matrix: ";
    cin >> p >> q;

    if (n != p) {
        cout << "Matrix multiplication not possible (columns of first != rows of second)." << endl;
        return 1;
    }

    vector<vector<int>> mat1(m, vector<int>(n));
    vector<vector<int>> mat2(p, vector<int>(q));

    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> mat1[i][j];

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < p; ++i)
        for (int j = 0; j < q; ++j)
            cin >> mat2[i][j];

    int res[m][q];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            res[i][j] = 0;
            for (int k = 0; k < n; k++) {
                // res[i][j] = a[i][o]*b[0][j] + a[i][1]* b[1][j]+ a[i][2]*b[2][j]
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < q; ++j) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}
