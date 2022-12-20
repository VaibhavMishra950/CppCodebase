#include<iostream>
using namespace std;


// BaseClass * baseClassPointer = new DerivedClass objDerived;  --> In this statement,
// if we define a function as 'virtual', then it will make sure that during function call,
// that the function of DerivedClass execute. Without 'virtual', function of BaseClass
// will execute.

/*
Rules for defining virtual functions: 
 --> They cannot be static.
 --> They are accessed by object pointers.
 --> Virtual functions can be friends of another clasds.
 --> A virtual function in base class may not be used.
 --> If a virtual functions is defined in a base class, there is no necessity of redefining
     it in the derived class. It will execute that function from base class if not found in
     derived class.
*/

class BaseClass{
    public:
        int varBase = 45;
        virtual void display(){ // This is a virtual function.
            cout<<"1. Displaying Base class variable varBase "<<varBase<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int varDerived = 90;
        void display(){
            cout<<"2. Displaying Base class variable varBase "<<varBase<<endl;
            cout<<"2. Displaying Derived class variable varDerived "<<varDerived<<endl;
        }
};

int main(){
    BaseClass * baseClassPointer;
    BaseClass objBase;
    DerivedClass objDerived;
    baseClassPointer = &objDerived;

    baseClassPointer -> display();  // It will come from DerivedClass.

    return 0;
}