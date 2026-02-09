#include<iostream>
#include<string>
using namespace std;

void permutation(string ans,string original){
   int n = original.length();
   if(original ==""){
    cout<<ans<<endl;
    return;
   }
   for(int i = 0; i < n; i++){
    char ch = original[i];
    string le = original.substr(0,i);
    string ri = original.substr(i+1); 
    permutation(ans+ch,le+ri);
   }
}

int main(){
    string str = "abc";
    permutation("",str);
    // working of substr
    // string str1 = "abcde"; removing c
    // string left = str1.substr(0,2); // meaninig 0 idx inclusive till 2 size tak
    // string rig = str1.substr(2+1);// 3 se end tak
    // cout<<left+rig;
}