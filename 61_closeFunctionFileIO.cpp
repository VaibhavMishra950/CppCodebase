#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    ofstream outFile("Files/sample61.txt");

    char name1[50];
    string name2;
    cout<<"Enter your name: ";
    // cin>>name;  // Single word
    cin.getline(name1, 50);

    outFile<<strcat(name1, " is my name.");

    outFile.close();    // This will close the file.

    ifstream inFile("Files/sample61.txt");
    // inFile>>name; // Single Word
    getline(inFile, name2);
    cout<<"The contents of file are: "<<name2;
    inFile.close();

    
    return 0;
}