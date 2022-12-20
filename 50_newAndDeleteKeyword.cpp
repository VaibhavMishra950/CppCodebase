#include<iostream>
using namespace std;

int main(){
    // Traditional Method: 
    int a = 10;
    int* b = &a;
    cout<<"The value of a is "<<*b<<endl;

    // new Operator:
    int *x = new int(20);
    cout<<"The value at address x is "<<*x<<endl;

    // arrays pointer using new Operator:
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    // delete Operator: 
    delete x;       // For deleting normal variable pointer.
    delete[] arr;   // for deleting array pointer.

    // Now, there is no guarentee that the values will be real or garbage.
    cout<<"The value at address x after using delete is "<<*x<<endl;
    cout<<"The value of arr[0] after using delete[] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] after using delete[] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] after using delete[] is "<<arr[2]<<endl;



    return 0;
}