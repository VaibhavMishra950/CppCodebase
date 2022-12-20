#include<iostream>
using namespace std;

class Base{
    protected:  // Protected members are as secure as private except they can be inherited.
        int a = 5;
    private:
        int b;
};
/*

For a protected member:
                          Public Derivation   Private Derivation   Protected Derivation
    ------------------------------------------------------------------------------------------
    1. Private members        Not Inherited         Not Inherited         Not Inherited
    1. Protected members        Protected              Private              Protected
    1. Public members            Public                Private              Protected

*/

class Derived : public Base{
    public:
        void printA(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    Base b;
    Derived d;
    // cout<<b.a;  // Will not work as is protected.
    // cout<<d.a;  // Will not work as public derivation of protected members remains prtected.
    d.printA();    // Will print 5 as protected members can be accessed from member functions.


    return 0;
}