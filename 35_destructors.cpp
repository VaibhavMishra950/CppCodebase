#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it returns any value.
int count = 0;


class num{
    public:
        num(){
            count++;
            cout<<"This is the time when my constructor is called for object number "<<count<<endl;
        }

        ~num(){
            cout<<"This is the time when my destructor is called for object number "<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating our first object n1"<<endl;
    num n1;             // Constructor will be called for n1.

    {   // All elements in the block will be deleted after the block ends.
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects."<<endl;
        num n2, n3;     // Constructor will be called twice for n2 and n3.
        cout<<"Exiting this block"<<endl;
        // Now, destructor will be called twice for n2 and n3 because n2 and n3 will be
        // deleted after the block ends 
    }

    cout<<"Back to main."<<endl;
    
    
    return 0;
    // Now the destructor will be called for n1 as the main block ends here.
}