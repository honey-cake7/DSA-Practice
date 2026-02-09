#include <iostream>
using namespace std;

// Function to convert decimal to binary
void decToBin(int n) {
    if (n == 0) {
        cout << "0";
        return;
    }
    string bin = "";
    while (n > 0) {
        if(n % 2 == 0){
            bin += "0";

        }
        else{
            bin += "1";
        }
        n  = n >> 1 ;
    }
    cout << bin;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    cout << "Binary representation: ";
    decToBin(num);
    cout << endl;
    return 0;
}