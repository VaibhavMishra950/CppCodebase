#include<iostream>

using namespace std;

class Complex{
    int a, b;

    public:
        void setNumber(int x, int y){
            a = x;
            b = y;
        }

        // The below line means that the non member - sumComplex Function is allowed to do anything with the private data of given Objects.
        friend Complex sumComplex(Complex o1, Complex o2); // Friend Function

        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}


int main(){
    Complex c1, c2, sum;

    c1.setNumber(2, 4);
    c1.printNumber();

    c2.setNumber(6, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    
    return 0;
}

/*
Properies of friend functions: 
1. Not in the scope of class.
2. Since, it is not in the scope of the class, it cannot be called from the object of that class
   i.e., c2.sumComplex() is invalid.
3. Can be invoked without the help of any object.
4. Usually contains the objects as arguments.
5. Can be declared inside public as well as private section of the class
6. It cannot access the members directly by their names and need object_name.member_name
   to access the members.

*/

