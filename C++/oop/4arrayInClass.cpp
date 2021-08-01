#include<iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void intitcounter() {counter = 0;}
    void setPrice(void);
    void displayPrice(void);
};

void Shop :: setPrice()
{
    cout<<"Enter the Id of your item no "<<counter + 1<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void Shop :: displayPrice()
{
    for(int i = 0; i < counter; i++)
    {
        cout<<"The price of your item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main(){
    Shop dukan;
    dukan.intitcounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}