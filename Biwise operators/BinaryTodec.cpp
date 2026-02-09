#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int binaryToDecimal(const string& binary) {
    int decimal = 0;
    int n = binary.length();
    for (int i = n - 1; i >= 0; i--){
        char ch = binary[i];
        int num = ch - '0'; // to convert in int
        decimal += num*(1<<(n - 1 - i)); // this multpiles the number by 2 to power   
    }
    return decimal;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);
    cout << "Decimal value: " << decimal << endl;

    return 0;
}