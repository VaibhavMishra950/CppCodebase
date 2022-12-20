#include<iostream>
using namespace std;

class Complex; // Forward Declaration.

class Calculator{
    public:
        int addComplexReal(Complex, Complex);
};


class Complex{
    int a, b;
    public:
        void setNumber(int x, int y){
            a = x;
            b = y;
        }
        // Individually declaring a function as friend.

        // friend int Calculator :: addComplexReal(Complex o1, Complex o2);

        // But this can be lengthy if we have so many function in Calculator class.
        // In that case we can declare the whole class as friend class.
        // Declaring whole Calculator class as friend class.
        
        friend class Calculator;


        
        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int Calculator :: addComplexReal(Complex o1, Complex o2){
    return o1.a + o2.a;
} 

int main(){
    Complex c1, c2;
    c1.setNumber(1, 3);
    c2.setNumber(2, 5);

    Calculator calc;
    int res = calc.addComplexReal(c1, c2);
    cout<<"The Result is: "<<res<<endl;
    
    return 0;
}