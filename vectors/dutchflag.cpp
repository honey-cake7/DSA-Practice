#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a; 
    a.push_back(2);
    a.push_back(0);
    a.push_back(2);
    a.push_back(1);
    a.push_back(1);
    a.push_back(0);
    int low = 0;
    int mid = 0;
    int high = a.size() - 1;
    // keep all the zeros behind low and all the 2s ahead of high while playing with mid
    //0 to low-1 -> 0
    //high+1 to end --> 2
    // low to mid - 1 --> 1 
    while(mid<=high){
        if(a[mid] == 2){
            int temp = a[high];
            a[high] = a[mid];
            a[mid] = temp;
            high--;
        }
        else if(a[mid] == 0){
            int temp = a[low];
            a[low] = a[mid];
            a[mid] = temp;
            low++;
            mid++;
        }
        else mid++;
    }

}