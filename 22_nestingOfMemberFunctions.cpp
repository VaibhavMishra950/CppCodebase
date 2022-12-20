#include<iostream>
#include<string>

using namespace std;

class binary{
    private:
        string s; // By default members of a class are private.
        void chk_bin();
    public:
        void read();
        void ones_compliment();
        void display();
};

void binary :: read(){
    cout<<"Enter a binary number: ";
    cin>>s;
    // Nesting a member function inside another member function.
    chk_bin(); // No need to write object.chk_bin(); as the function is being called by the member of the class itself.
}

void binary :: chk_bin(){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
        
    }
}

void binary :: ones_compliment(){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

void binary :: display(){
    cout<<"Displaying your binary number. "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    binary b;
    b.read();
    // b.chk_bin(); // Will be done automatically during read(); and the user can't do it manually because the function is private
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}