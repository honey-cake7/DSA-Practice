 #include<bits/stdc++.h>
using namespace std;

class Bike{
    public:
    int tyresize;
    
    // default consturctor; without any parameters;
    // parametrized constructor takes parameter while intializing 
    Bike (int a){
        cout<<"Constructor call hua"<<endl;
        //always called when object is intialized 
        this->tyresize = a;

    }

    ~Bike(){
        cout<<"destructor call hua"<<endl;
    }
    Bike(Bike &b){
        cout<<"Cp constructor called"<<endl;
    }
     
    
};
int main() {

    Bike tvs(15);
    Bike honda(23);
   
    if(1){
        Bike bma(15);
        cout<<bma.tyresize<<endl;
    }
 cout<<tvs.tyresize<<endl;
    Bike a(tvs);
}