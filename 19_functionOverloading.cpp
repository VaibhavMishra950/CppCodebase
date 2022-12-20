#include<iostream>
using namespace std;

// Function overloading is the process of making different function with same name
// which are differentiated by the number and type of arguments they take.

int calc(int a, int b){
    // This function will be used whenever we'll get two parameters in the calc() function.
    return a*b;
}

int calc(int a, int b, int c){
    // This function will be used whenever we'll get three parameters in the calc() function.
    return a+b+c;
}

int main(){

    cout<<calc(2, 5, 3)<<endl; // This will return 10 as it will use the function with 
                               // three arguments which returns the sum.
    cout<<calc(3, 5)<<endl;    // This will return 15 as it will use the function with 
                               // two arguments which returns the product.

    
    return 0;
}