#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a = 0;
        }

        Number(int x){
            a = x;
        }
        // Copy Constructor is used to create a exact copy of a object.
        // If the copy constructor is not defined, Compiler will supply its own copy constructor.
        Number(Number &obj){ // Copy Constructor
            cout<<"Running Copy Constructor.  :)"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The number for this object is: "<<a<<endl;
        }
};

int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z);       // Copy constructor invoked.
    z1.display();

    z2 = z;             // Copy constructor will not be invoked because the object has already 
    z2.display();       // been created and now we are just changing its value.


    Number z3 = z;      // Copy constructor invoked because we are creating new object
    z3.display();

    
    return 0;
}