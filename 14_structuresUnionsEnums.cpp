#include<iostream>
using namespace std;

// Structures are used to store multiple data of different type.
typedef struct employee // In C++, Structures are typedefed by default. So, it will not make any difference if we not write it.
{
    int age;
    float salary;
    char favChar;
}emp;

// Unions are just like structures but we can only use one data at a time and hence are more memory efficient.
union money
{
    int rupees;
    float dollars;
};


int main(){
    emp e1;
    e1.age = 37;
    e1.salary = 150.0;
    e1.favChar = 'v';

    cout<<"Value of e1.age is "<<e1.age<<endl;          // 37
    cout<<"Value of e1.salary is "<<e1.salary<<endl;    // 150.0
    cout<<"Value of e1.favChar is "<<e1.favChar<<endl;  // v
    

    union money mon1;
    mon1.rupees = 150;
    mon1.dollars = 45.2;

    cout<<mon1.rupees<<endl;  // This line will give garbage value because we have assigned a value to 'mon1.dollars'.
    cout<<mon1.dollars<<endl; // 45.2


    enum Meal { // This will create variables with the names provided and will set thier values to their index numbers.
        breakfast,
        lunch,
        dinner
    };
    Meal m1 = breakfast;
    Meal m2 = lunch;
    Meal m3 = dinner;
    cout<<"Value of m1: "<<m1<<endl;  // 0
    cout<<"Value of m2: "<<m2<<endl;  // 1
    cout<<"Value of m3: "<<m3<<endl;  // 2


    return 0;
}