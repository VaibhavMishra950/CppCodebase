#include<iostream>
using namespace std;

// Call By Value: This will not swap the numbers.
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// Call By Reference: This will swap the numbers using pointers.
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call By Reference: This will swap the numbers using Reference Variables.
void swapRefVars(int & a, int & b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 5, y = 10;
    cout<<"Values Before Swapping: "<<endl;
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;

    // swap(x, y); // This will not swap values.
    // swapPointer(&x, &y); // This will swap values using Pointers.
    swapRefVars(x, y); // This will swap values using Reference Variables.

    cout<<"Values After Swapping: "<<endl;
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    
    return 0;
}