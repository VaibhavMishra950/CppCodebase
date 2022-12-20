#include<iostream>
using namespace std;

// When we derive one class from two base classes, and both ogf them have functions with same name
// this is called ambiguity.
// Resolving this ambiguity is called Ambiguity Resolution.

class Base1{
    public:
        void greet(){
            cout<<"Greet from Base1. "<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Greet from Base2. "<<endl;
        }
};

class Derived : public Base1, public Base2{
    public:
        void greet(){           // This is ambiguity resolution. 
            Base1 :: greet();   // This shows Derived will use green() function of 'Base1'.
            // function of derived class will overwrite the function of Base classes.
            // and as the greet() of derived class calls greet() of Base1 class, so greet() of 
            // Base1 class will run.
        }
};


int main(){

    Base1 b1;
    Base2 b2;
    b1.greet();
    b2.greet();

    Derived d;
    d.greet();  // Ambiguity

    return 0;
}