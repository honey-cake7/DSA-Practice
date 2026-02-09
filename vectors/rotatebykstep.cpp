#include<iostream>
#include<vector>
using namespace std;
void reversepart(int i , int j , vector<int> &a){
    
   while(i <= j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    i++;
    j--;
   }
}
void display(vector<int> a){
    for(int i = 0 ; i < a.size() ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int k;
    cin>>k;
    
     vector<int> a;
    a.push_back(10);
    a.push_back(9);
    a.push_back(8);
    a.push_back(7);
    a.push_back(6);
    a.push_back(5);
    display(a);
    if(k >= a.size()) k = k%a.size();
    reversepart(0,a.size() - k - 1,a);
    reversepart(a.size()-k,a.size()-1,a);
    reversepart(0,a.size()-1,a);

    display(a);


}