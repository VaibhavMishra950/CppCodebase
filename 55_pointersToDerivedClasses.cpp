#include<iostream>
using namespace std;

class BaseClass{
    public:
        int varBase;
        void display(){
            cout<<"Displaying Base class variable varBase "<<varBase<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int varDerived;
        void display(){
            cout<<"Displaying Base class variable varBase "<<varBase<<endl;
            cout<<"Displaying Derived class variable varDerived "<<varDerived<<endl;
        }
};

int main(){
    BaseClass * baseClassPointer;
    BaseClass objBase;
    DerivedClass objDerived;
    baseClassPointer = &objDerived; // Pointing base class pointer to derived class.
    // Now, baseClassPointer will point to objDerived but, it will still invoke 
    // member functions of BaseClass because the pointer is of that type.
    // This is called "lead binding".

    // baseClassPointer->varDerived = 68; // This will produce error.
    baseClassPointer -> varBase = 34;  // This will run errorlessly.
    baseClassPointer -> display(); // It will come from BaseClass.

    baseClassPointer -> varBase = 546;  // This will run errorlessly.
    baseClassPointer -> display(); // It will come from BaseClass.

    DerivedClass * derivedClassPointer;
    derivedClassPointer = &objDerived;
    derivedClassPointer -> varDerived = 98;
    derivedClassPointer -> display();   // This will come from DerivedClass.


    return 0;
}