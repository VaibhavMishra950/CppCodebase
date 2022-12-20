#include<iostream>
using namespace std;

int main(){
    // Break Statement: Terminates the whole loop.
    for (int i = 0; i < 10; i++){
        if (i == 6){
            break;
        }
        cout<<"Break Statement: "<<i<<endl;
    }

    // Continue Statement: Terminates the current iteration and continue the remaining loop.
    for (int i = 0; i < 10; i++){
        if (i == 6){
            continue;
        }
        cout<<"Continue Statement: "<<i<<endl;
    }
    
    return 0;
}