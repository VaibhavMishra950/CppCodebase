#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }
        
};


int main(){
    // Complex c1;
    // Complex *ptr = &c1;

    Complex *ptr = new Complex; 


    (*ptr).setData(10, 15);
    // (*ptr).getData(); // This is as good as 
    ptr->getData();     // Here, '->' is called arrow operator.
    // Arrow Operator says: 
    //     Dereference the 'ptr' pointer and run the getData() function of the dereferenced 
    //     value. Hence, it will run getData() of Complex Class.

    
    return 0;
}