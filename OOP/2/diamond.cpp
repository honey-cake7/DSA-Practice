#include <iostream>
using namespace std;

// Base class
class A{
public:
    int pub;
};
class B : virtual public A{ 
public:
    int b_pub;
};
class C : virtual public A{
public:
    int cpub;
};
class D : public B,public C{
public:
    int dpub;
};






 



int main() {
   
}
