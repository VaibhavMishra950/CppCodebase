#include<iostream>
using namespace std;

int main(){

    // If Else Conditionals.
    int age;
    cout<<"Enter your Age: ";
    cin>>age;
    if (age<18){
        cout<<"You can not drive. "<<endl;
    }
    else if(age>150){
        cout<<"You are dead bro. "<<endl;
    }
    else{
        cout<<"You can drive. "<<endl;
    }
    
    // Switch Conditionals
    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;

    switch (choice){
    case 1:
        cout<<"You Entered 1. "<<endl;
        break;
    
    case 2:
        cout<<"You Entered 2. "<<endl;
        break;
    
    case 3:
        cout<<"You Entered 3. "<<endl;
        break;
    
    case 4:
        cout<<"You Entered 4. "<<endl;
        break;
    
    default:
        cout<<"You Entered other than 1, 2, 3 and 4. "<<endl;
        break;
    }
    
    return 0;
}