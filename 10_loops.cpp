#include<iostream>
using namespace std;

int main(){

    // For Loop
    for (int i = 0; i < 5; i++){
        cout<<"Printed using for loop: "<<i<<endl;
    }
    
    // While Loop
    // First checks condition then executes the code.
    int x = 0;
    while (x < 5){
        cout<<"Printed using while loop: "<<x<<endl;
        x++;
    }

    // do-While Loop
    // First executes the code then checks the condition.
    // That's why it runs at least once even if the condition is false by default.
    int y = 0;
    do{
        cout<<"Printed using do-while loop: "<<y<<endl;
        y++;
    } while (y < 5); 
    
    


    return 0;
}