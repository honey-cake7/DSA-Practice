#include<iostream>
using namespace std;
int count = 0;
void hanoi(int n, char s, char h,char d){
    if(n==0) return;
    hanoi(n-1,s,d,h);
    cout<<s<<"-->"<<d<<endl;
    count++;
    hanoi(n-1,h,s,d);
}

int main(){
    int n = 4;
    hanoi(n,'A','B','C');
    cout<<count;
}