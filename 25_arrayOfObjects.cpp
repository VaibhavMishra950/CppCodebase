#include<iostream>

using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setData(){
            salary = 150;
            cout<<"Enter the ID of this employee: ";
            cin>>id;
        }
        void getData(){
            cout<<"The ID of this employee is "<<id<< " and salary of this emoloyee is "<<salary<<endl;
        }
};
 
int main(){
    Employee comp[5];

    for (int i = 0; i < 5; i++)
    {
        comp[i].setData();
        comp[i].getData();
    }
    
    

    return 0;
}