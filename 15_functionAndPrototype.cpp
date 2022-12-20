#include<iostream>
using namespace std;

// Function Prototypes
int sum(int x, int y); // --> Acceptable
// int sum(int x, y); // --> Not Acceptable
// int sum(int, int); // --> Acceptable
// void g(void);      // --> Acceptable
void g();      // --> Acceptable


int main(){
    int a, b, c;
    cout<<"Enter the first number: ";
    cin>>a;
    
    cout<<"Enter the second number: ";
    cin>>b;

    c = sum(a, b); // a and b are actual parameters
    cout<<"The Sum is: "<<c<<endl;
    g();

    return 0;
}

int sum(int x, int y){
    // x and y are formal parameters.
    int z = x + y;
    return z;
}

void g(){
    cout<<"\nGood Morning"<<endl;
}