#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"The costprice of product is:";
    cin>>cp;
    cout<<"The sellingprice of product is:";
    cin>>sp;
    if(sp>cp){
        cout<<"there is a profit of"<<sp-cp;
    }
    // //else{
    //     cout<<" there is a loss of"<<cp-sp;
    // } when cp=sp it will show loss sooo
    if(cp>sp){
        cout<<"there is a loss of"<<cp-sp;
    }
     if(cp==sp){
        cout<<"No profit or loss";
    }
}
