#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(),v.end()); // O(nlogn)

    
    cout << "Vector elements: ";
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}