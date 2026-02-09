#include<iostream>
#include<string>
#include<vector>
using namespace std;

void subset(string ans,string original,vector<string> &v,bool flag){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    if(original.length() == 1){
        if(flag == true) subset(ans+ch,original.substr(1),v,true);
        subset(ans,original.substr(1),v,true);
        return; // to end and not run down two conditions
    }
    char dh = original[1];
    if(ch == dh){
        if(flag == true) subset(ans+ch,original.substr(1),v,true);
        subset(ans,original.substr(1),v,false);
    }
    else{
        if(flag == true) subset(ans+ch,original.substr(1),v,true);
        subset(ans,original.substr(1),v,true);
    }
    
}

int main(){
    string str = "aab";
    vector<string> v;
    subset("",str,v,true);
    for(auto ele: v){
        cout<<ele<<endl;
    }
}