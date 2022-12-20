#include<iostream>
using namespace std;

// Base Class
class Employee{
    public:
        int id;
        float salary;
        Employee(int inpId){
            id = inpId;
            salary = 150.0;
        }
        Employee(){}
};

/*
Derived Class Syntax: 
class {{Derived_Class_Name}} : {{Visibility_Mode}} {{Base_Class_Name}}
{
    class members/methods.etc...
}

Important: 
1. Default Visibility Mode is Private.
2. Public Visibility Mode: Public members of the base class becomes the public members of the derived class.
3. Private Visibility Mode: Public members of the base class becomes the private members of the derived class.
4. Private Memebers of base class are never inherited

*/

// Creating a Programmer class derived from Employee base class.
class Programmer : public Employee{
    public:
        int lanaguageCode;
        Programmer(int inpId){
            id = inpId;
            lanaguageCode = 9;
        }
        void getData(){
            cout<<id<<endl;
        }
};


int main(){
    Employee e1(1), e2(2);
    cout<<e1.salary<<endl;
    cout<<e2.salary<<endl;

    Programmer p1(3);
    cout<<p1.lanaguageCode<<endl;
    cout<<p1.id<<endl;
    p1.getData();

    return 0;
}