#include<iostream>
using namespace std;

template <class T1=int, class T2=float>
class Temp{
    public:
        T1 a;
        T2 b;
        Temp(T1 x, T2 y) : a(x), b(y){}
        void display(){
            cout<<"The vlaue of a is "<<a<<endl;
            cout<<"The vlaue of b is "<<b<<endl;
        }
};
int main(){

    Temp<char, int> t2('x', 5);  // This will use provided parameters. 
    Temp<> t1(5, 1.8);           // This will use default parameters. 

    t1.display();
    cout<<endl;
    t2.display();
    
    return 0;
}