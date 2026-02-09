#include<bits/stdc++.h>
using namespace std;

void factors(int n) {
    int a = sqrt(n);
    for (int i = 1; i < a; i++) {
        if (n % i == 0) cout << i << " ";
    }
    for (int i = a; i >= 1; i--) {
        if (n % i == 0) cout << n / i << " ";
    }
}
int main() {
    factors(10024);
}