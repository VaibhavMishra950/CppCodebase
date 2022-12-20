
#include<iostream>

using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
        void initCounter(){counter = 0;}
        void setPrice();
        void displayPrice();
};

void Shop :: setPrice(){
    cout<<"Enter the ID of item number "<<counter<<": ";
    cin>>itemId[counter];
    
    cout<<"Enter the Price of item number "<<counter<<": ";
    cin>>itemPrice[counter];

    counter++;
}

void Shop :: displayPrice(){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Price of item with ID "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}

int main(){
    
    Shop dukaan;
    dukaan.initCounter();
    for (int i = 0; i < 5; i++){
        dukaan.setPrice();
    }
    
    dukaan.displayPrice();

    return 0;
}