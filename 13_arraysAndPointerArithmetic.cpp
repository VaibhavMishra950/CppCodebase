#include<iostream>
using namespace std;

int main(){
    // Used to store multiple data of same type.
    // Array Examples
    int marks[5] = {45, 76, 55, 99, 85};
    int mathMarks[4];
    mathMarks[0] = 86;
    mathMarks[1] = 95;
    mathMarks[2] = 75;
    mathMarks[3] = 68;

    for (int i = 0; i < 4; i++){
        cout<<"Value of mathMarks["<<i<<"] is: "<<mathMarks[i]<<endl;
    }
    // you can also change the value of array.
    mathMarks[2] = 99;
    cout<<mathMarks[2]<<endl;

    // Arrays and Pointers
    // Array stores its elements in a sequence in memory.
    int* p = marks; // marks stores the address of marks[0];

    cout<<"The value of *p is:     "<<*p<<endl;
    cout<<"The value of *(p+1) is: "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is: "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is: "<<*(p+3)<<endl;



    
    return 0;
}