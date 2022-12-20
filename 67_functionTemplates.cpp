#include<iostream>
using namespace std;

// Function templates are similar as class Templates

template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template <class T1, class T2>
float Average(T1 x, T2 y){
    float avg = (x + y) / 2;
    return avg;
}


int main(){

    int x = 5;
    int y = 7;
    float z = Average(x, y);
    cout<<"The Average is: "<<z<<endl;
    
    cout<<"Values before running swapp() : "<<endl;
    cout<<x<<endl<<y<<endl;

    swapp(x, y);  // This will also run for float and char values of x and y without any changes.
    
    cout<<"Values after running swapp() : "<<endl;
    cout<<x<<endl<<y<<endl;

    
    return 0;
}