#include<iostream>
using namespace std;

int main(){
    int a = 8;
    int & b = a; // '&' is called reference variable. Now b holds a reference to a.
    // now all operation we will perform with b will reflect in a.
    
    b = 9;
    cout<<a<<endl; // This will print 9

    // Typecasting.
    float x = 55.6;
    cout<< int(x) <<endl; // This will print 55 instead of 55.6 because
    cout<< (int)x <<endl; // x was typecasted into 'int' 
    
    return 0;
}