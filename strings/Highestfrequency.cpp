#include <iostream>
#include <string>
# include <vector>
using namespace std;
int main() {
    string S = "leetcode";
    vector<int> arr(26,0);
    for(int i = 0; i < S.length(); i++){
        int asc = (int)S[i];
        arr[asc - 97]++;
    }
    int mx = 0;
    for(int i = 0; i < S.length(); i++){
        if(arr[i]>mx) mx = arr[i];
    }
    for(int i = 0; i < S.length(); i++){
        if(arr[i] == mx) {
            int asc = i + 97;
            cout<<(char)asc<<" "<<mx;
        }                            
    }
    


}