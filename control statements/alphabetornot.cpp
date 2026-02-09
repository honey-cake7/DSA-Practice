#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character:";
    cin>>ch;
    // a-z= 97 to 122, A-Z=65-90
    int ascii=(int)ch;
    if((ascii>=65 && ascii<=90) ||(ascii>=97 && ascii<=122)){
        cout<<ch<<"Is a alphabet";
    }
    else{
        cout<<"not a alphabet";
    }
    //we can use || instead of writting this  if(ascii>=97 && ascii<=122){
    //     cout<<ch<<"lower case   alphabet";
    // }

}