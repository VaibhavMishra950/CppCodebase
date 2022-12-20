#include<iostream>
using namespace std;

class A{
    int a;
    public:
        // A& setData(int a){
        void setData(int a){
            this->a = a; // without 'this', function will use local 'a' in both places.
            // return *this; // This is how we will return the same object for which
                             // setData() has been called.

        }
        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }

};

int main(){
    // 'this' keyword is a pointer which points to the object which invokes the member function.
    A a;
    a.setData(4);
    a.getData();
    
    return 0;
}