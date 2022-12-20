// System header files: they come prewritten with compiler.
#include<iostream>
// User header files: they are written by the user.
// #include "this.h" // It will produce error if this.h will not found in the same directory.

using namespace std;

int main(){
    int a = 4, b = 5; // Assignment operator '=' is used to assign values to variables.
    bool x = true, y = false;
    // Operator in C++:
    // Arithmetic Operators:
    cout<<"The value of a + b is "<<a+b<<endl;    
    cout<<"The value of a - b is "<<a-b<<endl;    
    cout<<"The value of a * b is "<<a*b<<endl;    
    cout<<"The value of a / b is "<<a/b<<endl;    
    cout<<"The value of a % b is "<<a%b<<endl;    
    cout<<"The value of a++ is "<<a++<<endl; // Incrementation Operator: print then increment.
    cout<<"The value of a-- is "<<a--<<endl; // Decrementation Operator: print then decrement.
    cout<<"The value of ++a is "<<++a<<endl; // Incrementation Operator: increment then print.
    cout<<"The value of --a is "<<--a<<endl; // Decrementation Operator: decrement then print.

    // Comparison Operators: 
    cout<<"the value of a == b is "<<(a==b)<<endl; // Equal to Operator.
    cout<<"the value of a != b is "<<(a!=b)<<endl; // Not Equal to Operator.
    cout<<"the value of a <= b is "<<(a<=b)<<endl; // Less than or Equal to Operator.
    cout<<"the value of a >= b is "<<(a>=b)<<endl; // Greater than or Equal to Operator.
    cout<<"the value of a < b is "<<(a<b)<<endl;   // Less than operator.
    cout<<"the value of a > b is "<<(a>b)<<endl;   // Greater than Operator.

    // Logical Operators: 
    cout<<"The value of x && y is: "<<(x && y)<<endl; // And Operator.
    cout<<"The value of x || y is: "<<(x || y)<<endl; // Or Operator.
    cout<<"The value of !x is: "<<(!x)<<endl;         // Not Operator.
    return 0;
}