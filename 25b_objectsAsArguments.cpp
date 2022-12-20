#include<iostream>

using namespace std;

class complex{
    int a, b;

    public:
        void setData(int x, int y){
            a = x;
            b = y;
        }

        void setDataBySum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void displayComplex(){
            cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};


int main(){
    
    complex c1, c2, c3;

    c1.setData(1, 2);
    c1.displayComplex();
    c2.setData(3, 4);
    c2.displayComplex();

    c3.setDataBySum(c1, c2);
    c3.displayComplex();

    

    return 0;
}