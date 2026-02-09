#include<bits/stdc++.h>
using namespace std;


class Queue{
    public:
        int f;
        int b;
        int arr[5];
        Queue () {
            f = 0;
            b = 0;
        }
        void push(int x) {
            if(b == 5){
                return;
            }
            arr[b++] = x;
        }
        void pop() {
            if(f == b) {
                return;
            }
            f++; 
        }
        int front() {
          return arr[f];
        }
        int back() {
            return arr[b - 1];
        }

};
int main() {


}