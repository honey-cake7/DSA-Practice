#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"Enter a letter:";
    cin>> ch ;
    int n=(int)ch;
    if((n>+65 && n<=90) || (n>=65&&n<=122)){
    if(n==65 || n==97 ||n==69 ||n==101 ||n==73 ||n==105 ||n==79 ||n==111 ||n==85 ||n==117){
    cout<<"The letter is a vowel";
}
 else{
    cout<<"The letter is a consonant";
 }
    }
    else{
        cout<<"ERROR";
    }
 }
    // we can use char='i'