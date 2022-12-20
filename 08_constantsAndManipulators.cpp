#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    // Constants in C++
    const int x = 5; // It's value can't be changed.
    cout<<x<<endl;
    // x = 9; // This will produce an error.

    // Manipulators: 
    //     They are used to manipulate how data is presented on screen.
    // 'endl' and 'setw' are manipulators in C++. 

    cout<<"Hello World"<<endl; // 'endl' is used for new line.

    cout<<setw(4)<<"x"<<endl;   // 'setw' is used to set the width of output.
    cout<<setw(4)<<"xy"<<endl;  // All of them will take space of 4 letters
    cout<<setw(4)<<"xyz"<<endl; // during output because of 'setw(4)'

    
    return 0;
}