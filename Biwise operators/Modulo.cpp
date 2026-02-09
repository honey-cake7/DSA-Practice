// (a+b)%c -> (a%c + b%c)%c
//(a*b)%c == (a%c *b%c) %c
//(a - b)%c = (a %c  - b%c + c) %c
#include<bits/stdc++.h>
using namespace std;

vector<long long int> fact(int n) {
    int MOD = 100000000 + 7;
    vector<long long int> f(n + 1, 1);
    for (int i = 2; i <= n; i++) {
        f[i] = ((i % MOD) * (f[i - 1] % MOD)) % MOD;
    }
    return f;

}
int main() {
    vector<long long int> res = fact(25);
    for(int i = 0 ; i < res.size(); i++){
        cout<<i<<"! ="<<res[i]<<endl;
    }
}