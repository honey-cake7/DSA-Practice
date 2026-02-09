#include <iostream>
using namespace std;
int fact(int x)
{
    int factor = 1;
    for (int i = 1; i <= x; i++)
    {
        factor *= i;
    }
    return factor;
}
int comb(int n, int r)
{
    int nfact = fact(n);
    int nrfact = fact(n - r);
    int rfact = fact(r);

    return nfact / (nrfact * rfact);
}

int main()
{
    int n, c, r;
    cout << "Enter n =";
    cin >> n;
    cout << "Enter r=";
    cin >> r;
    c = comb(n, r);
    cout << "The combinations are " << c;
}
