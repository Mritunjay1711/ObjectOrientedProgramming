#include<iostream>
#include<fstream>
#include<cstring>
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
    fstream file;
    file.open("7Stock.dat", ios :: out);
    prod ob;
    int n;
    cout << "Enter the number of products: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "Enter the data for product: ";
        getData(ob);
        file.write((char*)&ob, sizeof(ob));
    }
    file.close();

    file.open("7Stock.dat", ios :: in | ios :: out | ios :: ate);
    file.seekg(0);
    char Code1[10];
    int stock;
    cout << "Enter the Code of the product to update stock: ";
    cin >> Code1;
    cout << "Enter the new stock: ";
    cin >> stock;
    for(int i = 0; i < n; i++)
    {
        file.read((char*)&ob, sizeof(ob));
        if(!strcmp(Code1, ob.Pcode))
        {
            ob.stock = stock;
        }
        int size = -1 * sizeof(ob);
        file.seekg(size, ios :: cur);
        file.write((char*)&ob, sizeof(ob));
    }
    file.close();
    
    file.open("7Stock.dat", ios :: in);
    while(file)
    {
        file.read((char*)&ob, sizeof(ob));
        display(ob);
    }
    file.close();
    return 0;
}