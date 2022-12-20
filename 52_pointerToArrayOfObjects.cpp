#include<iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(){
            cout<<"The ID of this item is "<<id<<endl;
            cout<<"The Price of this item is "<<price<<endl;

        }
};

int main(){
    int size = 3;
    ShopItem *ptr = new ShopItem[size];

    int p;
    float q; 
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the ID and Price of the item "<<i+1<<": "<<endl;
        cin>>p>>q;
        (ptr+i)->setData(p, q); 
    }
    for (int i = 0; i < size; i++)
    {
        (ptr+i)->getData();
    }
    
    


    return 0;
}