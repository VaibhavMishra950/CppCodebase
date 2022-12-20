#include<iostream>  // <iostream> header file is responsible for Input and Output operations.
using namespace std;

int main(){
    int x;
    // 'cin' is used for input and 'cout' is used for output.
    cout<<"Enter a number: "<<endl; // '<<' is called insertion operator as it inserts the data on console.
    cin>>x;  // '>>' is called extraction operator as it extracts the data from the console.
    
    cout<<"You entered "<<x<<endl;

    return 0;
}