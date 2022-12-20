#include<iostream>
using namespace std;

/*
Initialization Section is a shorthand for assigning variables their values during constructor call
Syntax for initialization list in constructor:
Constructor(initialization-list) : initialization-section{
    body of constructor
}
*/

class Test{
    int b;
    int a;
    public:
        Test(int i, int j) : a(i), b(a + j){ 
            // This will work because a has been initialized before b in private section of class.
            // We can also set values of variables here.
            cout<<"Constructor Executed. "<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
        }
};

int main(){
    Test t(10, 20);
    return 0;
}