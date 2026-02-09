#include <iostream>
using namespace std;

// Base class
class A{
private:
    int pri;// cant be accessed and herited
protected:
    int pro;//cant be accessed but herited
public:
    int pub; // can be accessed and herited
};
class B : private A{
    // everthing inherited from A becomes private here as private is highest security
    // protected A public from A becomes protected but private remains private
    // public A   public is only herited from A
public:
    int b_pub;
};

int main() {
    B b;  
}

