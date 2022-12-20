#include<iostream>
using namespace std;

/*
Case 1:
class B : public A{
    Order of execution of constructor -> First A() then B().
};

Case 2:
class A : public B, public C{
    Order of execution of constructor -> First B() then C() then A().
};

Case 3:
class A : public B, virtual public C{
    Order of execution of constructor -> First C() then B() then A().
};

*/

class Base1{
    int data1;
    public:
        Base1(int x){
            data1 = x;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printDataBase1(){
            cout<<"The value of data1 is: "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int x){
            data2 = x;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printDataBase2(){
            cout<<"The value of data2 is: "<<data2<<endl;
        }
};

class Derived : public Base1, public Base2{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called. "<<endl;
        }
        void printDataDerived(){
            cout<<"The value of derived1 is: "<<derived1<<endl;
            cout<<"The value of derived2 is: "<<derived2<<endl;
        }
};
int main(){
    Derived d1(1, 2, 3, 4);
    d1.printDataBase1();
    d1.printDataBase2();
    d1.printDataDerived();
    
    return 0;
}