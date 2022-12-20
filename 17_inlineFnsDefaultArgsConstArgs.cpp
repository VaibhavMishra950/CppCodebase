#include<iostream>
using namespace std;

// inline functions will place the return value at the place of function call instead of 
// calling the function. This will reduce execution time and increase program efficiency.
inline int product(int a, int b){
    // Not recommended to use below lines with inline functions
    // static int c=0; // This executes only once
    // c = c + 1; // Next time this function is run, the value of c will be retained
    return a*b;
}

// Default arguments are used when use doesn't provides value of that argument
// They should always be placed after normal arguments during function definition.
float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;
}

// Constant Arguments are used when we dont want our argument to be modified.
// This is generally use during 'Function Call By Reference'.
void strlen(const char *p){
    cout<<*p<<endl;
}

int main(){
    int a, b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl; // here 'product(a,b)' will be replaced
    // by a*b due to inline function.

    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< " Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";
    return 0;
}
