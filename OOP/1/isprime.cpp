#include<bits/stdc++.h>
using namespace std;
bool isprime(int n) {
    if (n == 1)
        return false;
    int a = sqrt(n);
    for (int i = 2;i <= a;i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    cout << isprime(72);
}