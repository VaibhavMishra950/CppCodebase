#include<iostream>
using namespace std;

// Templates are blurprint for classes. We can pass custom data types and can create 
// multiple classes for different data types with a single piece of code.

template <class T>
class Vector{
    public:
        T * arr;
        int size;

        Vector(int m){
            size = m;
            arr = new T[size];
        }

        T dotProduct(Vector &v){
            T d = 0;
            for (int i = 0; i < size; i++)
            {
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }

};

int main(){

    // Using Template with int data type

    // Vector <int>v1(3);
    // v1.arr[0] = 1;
    // v1.arr[1] = 3;
    // v1.arr[2] = 5;
    
    // Vector <int>v2(3);
    // v2.arr[0] = 2;
    // v2.arr[1] = 4;
    // v2.arr[2] = 6;

    // int res = v1.dotProduct(v2);
    // cout<<res;


    // Using Template with float data type. 
    Vector <float>v1(3);
    v1.arr[0] = 1.2;
    v1.arr[1] = 3.4;
    v1.arr[2] = 5.6;
    
    Vector <float>v2(3);
    v2.arr[0] = 2.3;
    v2.arr[1] = 4.5;
    v2.arr[2] = 6.7;

    float res = v1.dotProduct(v2);
    cout<<res;

    
    return 0;
}