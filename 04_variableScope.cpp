#include<iostream>
using namespace std;

int x = 55; // Global variable

int main(){

    int x = 9;

    cout<<"Local Variable: "<<x<<endl;
    cout<<"Global Variable: "<<::x<<endl;
    // '::' is called Scope Resolution Operator. 

    return 0;
}