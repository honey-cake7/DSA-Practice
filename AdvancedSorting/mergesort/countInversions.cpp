#include<iostream>
#include<vector>
using namespace std;

int countinversions(vector<int> &a,vector<int> &b){
    int count = 0;
    int i = 0,j = 0;// a,b
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count += (a.size() - i);
            j++;
        }
        else i++;
    }
    return count;
}
void merge(vector<int> &a,vector<int> &b,vector<int> &res){
    int i = 0, j = 0, k = 0;
    while(i<a.size()&& j < b.size()){
        if(a[i]<=b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    if(i == a.size()) while(j<b.size()) res[k++] = b[j++];
    if(j == b.size()) while(i<a.size()) res[k++] = a[i++];

}
int mergesort(vector<int> &v){
    int n = v.size();
    int count= 0;
    if(n==1) return 0;
    int n1 = n/2 , n2 = n - n/2; 
    vector<int> a(n1),b(n2);
    //copy pasting
    for(int i = 0 ; i < n1 ; i++) a[i] = v[i];
    for(int i = 0 ; i < n2 ; i++) b[i] = v[n1+i];
    // recursion to break it in single elements
    count  +=mergesort(a);
    count  +=mergesort(b);
   // count inversions
    count += countinversions(a,b);
     // merging sorted array
    merge(a,b,v);
    a.clear();
    b.clear(); 
    return count;
}
int main(){
    vector<int> v = {5,1,3,0,4,9,6};
    cout<<mergesort(v);
}