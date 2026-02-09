#include<iostream>
#include<vector>
using namespace std;

void printsubsequence(vector<int> a, int n,int idx, vector<int> ans, int k){
    if(idx == n){
        if(ans.size() == k){
            for(int i = 0; i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;    
    }
    printsubsequence(a,n,idx+1,ans,k);
    ans.push_back(a[idx]);
    printsubsequence(a,n,idx+1,ans,k);
}

int main(){
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> v;
    int k = 3;
    printsubsequence(a,n,0,v,k);
}