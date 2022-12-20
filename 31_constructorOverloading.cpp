#include<iostream>
using namespace std;

// Constructor Overloading works same as the function overloading.
// Constructor with matching pair of parameters will be called on object creation.

class Complex{
    int a, b;
    public:
        Complex(){
            a = 0;
            b = 0;
        }
        
        Complex(int x){
            a = x;
            b = 0;
        }

        Complex(int x, int y){
            a = x;
            b = y;
        }

        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){

    Complex c1;        // It will use default constructor
    c1.printNumber();  // 0 + 0i
    
    Complex c2(5);     // It will use parameterized constructor with one parameter.
    c2.printNumber();  // 5 + 0i
    
    Complex c3(2, 7);  // It will use parameterized constructor with two parameters.
    c3.printNumber();  // 2 + 7i


    
    return 0;
}