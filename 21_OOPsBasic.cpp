#include<iostream>

using namespace std;
/*

Basic Concepts in Object-Oriented Programming:
    Classes - Basic template for creating objects
    Objects – Basic run-time entities
    Data Abstraction - Hiding Implementation Details
    Encapsulation – Wrapping data and functions into a single unit
    Polymorphism – Ability to take more than one forms
    Inheritance – Properties of one class can be inherited into others
    Dynamic Binding – Code which will execute is not known until the program runs
    Message Passing – message (Information) call format

*/
class Employee{         // Class Declaration
    private:            // Declaring private variables and functions.
        int a, b, c;
    public:             // Declaring public functions and variables.
        int d, e;
        void setData(int x, int y, int z); // Function decalration within the class and definition outside the class.
        void getData(){ // Complete Function Definition within the class declaration.
            cout<<"The value of variable a is: "<<a<<endl;
            cout<<"The value of variable b is: "<<b<<endl;
            cout<<"The value of variable c is: "<<c<<endl;
            cout<<"The value of variable d is: "<<d<<endl;
            cout<<"The value of variable e is: "<<e<<endl;
        }
};

void Employee :: setData(int x, int y, int z){   // Function definition outside the class. 
    a = x;
    b = y; 
    c = z;
}

int main(){
    Employee e1;  // Creating object e1 of class Employee.
    e1.d = 55;    // Changing values of public functions.
    e1.e = 96;
    // e1.a = 56; // This will throw an error because a is a private variable.
    e1.setData(11, 12, 13); 
    e1.getData(); 
    return 0;
}