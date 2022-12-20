#include<iostream>

using namespace std;

class Employee{
    int id;
    static int count;

    public:
        void setData(){
            cout<<"Enter the ID: ";
            cin>>id;
            count++; 
        }
        void getData(){
            cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
        }
        static void getCount(){  // This is a static function.
            // Static member functions can only access static variables.
            // They can't access normal variables;
            cout<<"The value of count is "<<count<<endl;
        }
};


int Employee :: count; // Default value if 0;
// int Employee :: count = 100; // This can be written in order to change its initial value from 0 to 100.



// Static variables are not declared for each object.
// They are declared for the class
// They are initialized once the class is creaed and then sustained till the 
// termination of program.

int main(){
    Employee e1, e2, e3;

    e1.setData();
    e1.getData();

    e2.setData();
    e2.getData();

    e3.setData();
    e3.getData();

    Employee :: getCount(); // Static function can be called with classname also.

    return 0;
}