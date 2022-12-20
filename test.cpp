#include<iostream>

class Employee{
    protected:
        int id;
        char* name;
        float salary;
    public:
        Employee(int i, char* n, float s): id(i), name(n), salary(s){}
        
};

int main(){

    return 0;
}