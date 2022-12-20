#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    // 'open()' is a member function which is defined in both 'ofstream' and 'ifstream'
    
    ofstream outFile;
    outFile.open("Files/sample62.txt");  
    outFile<<"This is line one of sample text for FileIO Operations.\n";
    outFile<<"This is line two of sample text for FileIO Operations.\n";
    outFile<<"This is line three of sample text for FileIO Operations.\n";
    outFile<<"This is line four of sample text for FileIO Operations.\n";
    outFile<<"This is line five of sample text for FileIO Operations.\n";
    outFile<<"This is line six of sample text for FileIO Operations.\n";
    outFile.close();

    ifstream inFile;
    string st;
    inFile.open("Files/sample62.txt");

    while (inFile.eof() == 0){  // 'eof()' returns 'true' or '1' if we are at the end of file.
        getline(inFile, st);
        cout<<st<<endl;
    }
    

    
    return 0;
}