#include<iostream>
using namespace std;

template <class T>
void func(T a){
    cout<<"Template Function: Value of a is "<<a<<endl;
}

void func(int a){
    cout<<"Exact Match Function: Value of a is "<<a<<endl;
}


int main(){

    func(5);    // In this case, Function with exact match will be given highest proirity.
    
    return 0;
}