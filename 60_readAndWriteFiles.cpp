#include<iostream>
#include<fstream>
using namespace std;

/*
The useful classes for working with files in C++ are: 
  -> fstreambase
  -> ifstream    --> Derived from fstreambase.
  -> ofstream    --> Derived from fstreambase.
*/

/*
In order to work with files, you will have to open it. Primarily. There are 2 ways to open a
file:
  -> Using the consdtructor
  -> Using the member function open() of the class.
*/

int main(){
    string st1 = "This will be written", st2;

    // Opening files using constructor and writing it:
    // ofstream out("Files/sample60.txt");
    // out<<st1;

    // Opening files using constructor and reading it:
    ifstream in("Files/sample60b.txt");
    // in>>st2;    // This will stop reading when it will see a blank space or new line.
    // cout<<st2;  // Hence, this will print only first letter.

    getline(in, st2); // This member function will read the whole line instead of a word.
    cout<<st2;        // This will print whole line.


    
    return 0;
}