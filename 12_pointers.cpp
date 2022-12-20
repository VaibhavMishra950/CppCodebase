#include<iostream>
using namespace std;

int main(){
    // Pointers: They are the variables used for storing address of another variable.
    int x = 9;
    int* y = &x;

    // '&' --> Address Of (Reference) Operator
    cout<<"The Address of x is: "<<&x<<endl;
    cout<<"The Address of x is: "<<y<<endl;

    // '*' --> Value At (Dereference) Operator
    cout<<"The Value of x is: "<<x<<endl;
    cout<<"The Value of x is: "<<*y<<endl;

    // Pointer to Pointer: It stores the address of another pointer.
    int** z = &y;

    cout<<"The Address of y is: "<<z<<endl;
    cout<<"The Address of x is: "<<*z<<endl;

    cout<<"The Value of y is: "<<*z<<endl;
    cout<<"The Value of x is: "<<**z<<endl;





    return 0;
}