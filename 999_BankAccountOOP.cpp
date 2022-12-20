#include <iostream>
using namespace std;

class BankAccount{
    private:
        long long int accno;
        string name;
        float balance;

    public:
        BankAccount(long long int no, string nm) : accno(no), name(nm){
            balance = 0.00;
        }
        void displayDetails(){

            cout<<"\n********************************************\n"<<endl;
            cout<<"Account Number: "<<accno<<endl;
            cout<<"Customer's Name: "<<name<<endl;
            cout<<"Balance Left: "<<balance<<endl;
            cout<<"\n********************************************\n"<<endl;

        }
        void Deposit(float amount){
            balance += amount;
            cout<<"Amount Deposited Successfully. "<<endl;
            cout<<"Closing Balance: "<<balance<<endl;
        }
        void Withdraw(float amount){
            if (amount > balance){
                cout<<"Not Enough Balance.";
            }
            else{
                balance -= amount;
                cout<<"Amount Withdrawn Successfully."<<endl;
                cout<<"Closing Balance: "<<balance<<endl;
            }
            
        }

};

int main(){
    BankAccount b1(34770917051, "Vaibhav Mishra");
    b1.displayDetails();
    b1.Deposit(50000);
    b1.displayDetails();
    b1.Withdraw(12500);
    b1.displayDetails();

    
    return 0;
}