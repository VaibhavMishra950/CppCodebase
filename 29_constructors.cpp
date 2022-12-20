#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        // Creating a Constructor
        // A constructor is a special member function with same name ass the class.
        // It is used to initialized the objects of a class
        // It is automatically invoked whenever a object is created.
        Complex(int x, int y);

        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

/* Constructors which accepts no Parameters are called "Default Cunstructor".
Complex :: Complex(){
    // This is a default constructor.
}
*/


// Constructors which accepts Parameters are called "Parameterized Cunstructor".
Complex :: Complex(int x, int y){  // Parameterized Constructor.
    a = x;
    b = y;
}

int main(){
    // Implicit call
    Complex c1(5, 7);

    // Explicit call
    Complex c2 = Complex(10, 14);

    c1.printNumber();
    c2.printNumber();

    return 0;
}
/*
Characteristics of Constructors: 
1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return types. They don't even have "void"
   return type.
4. We cannot refer to their address.
5. As they are member "functions", their parameters can also have some default values provided.
*/