#include<iostream>
using namespace std;

typedef struct prod
{
    char Pcode[10];
    char Desc[10];
    int stock;
}prod;

void getData(prod &ob)
{
    cout << "Enter the Code: ";
    cin >> ob.Pcode;
    cout << "Enter the name: ";
    cin >> ob.Desc;
    cout << "Enter the stock: ";
    cin >> ob.stock;
}

void display(prod ob)
{
    cout << "Code: " << ob.Pcode << endl;
    cout << "Name: " << ob.Desc << endl;
    cout << "Stock: " << ob.stock << endl;
}

int main(){
    
    return 0;
}