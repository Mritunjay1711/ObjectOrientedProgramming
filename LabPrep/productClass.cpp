#include <iostream>
#include <cstring>
#include<ctime>
using namespace std;

class date
{
public:
    int dd, mm, yy;
    void getData()
    {
        cout << "Enter the date in dd mm yyyy format: ";
        cin >> dd >> mm >> yy;
    }
    int operator>(date ob2)
    {
        if(yy > ob2.yy)
            return 1;
        else if(yy == ob2.yy && mm > ob2.mm)
            return 1;
        else if(mm == ob2.mm && dd > ob2.dd)
            return 1;
        else
            return 0;
    }
    void display()
    {
        cout << dd << "-" << mm << "-" << yy << endl;
    }
};

class Product
{
    char name[30];
    float price;
    date exp;

public:
    Product() {}
    Product(char *n, float p, date d)
    {
        strcpy(name, n);
        price = p;
        exp = d;

        date curr;
        time_t now = time(0);           // Gives Current time and date
        tm *ltm = localtime(&now);      // To take year, month and data separately
        curr.yy = 1900 + ltm->tm_year; // Year
        curr.mm = 1 + ltm->tm_mon;    // Month
        curr.dd = ltm->tm_mday;        // Date
        if (curr > exp)
            throw 1;

    }
    int operator>(Product ob1)
    {
        return price > ob1.price ? 1 : 0;
    }
    void display()
    {
        cout << "Product name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Expiry Date: " ;
        exp.display();
    }
};

int main()
{
    try{
        char name[30];
        float price;
        date exp;
        cout << "Enter the name of product: ";
        cin >> name;
        cout << "Enter the price: ";
        cin >> price;
        cout << "Enter the expiry date:\n";
        exp.getData();
        Product ob1(name, price, exp);
        ob1.display();

        cout << "Enter the name of product: ";
        cin >> name;
        cout << "Enter the price: ";
        cin >> price;
        cout << "Enter the expiry date:\n";
        exp.getData();
        Product ob2(name, price, exp);
        if(ob1 > ob2)
            cout << "Price of ob1 is greater!\n";
        else    
            cout << "Price of ob2 is greater\n";
    }
    catch(int a)
    {
        cout << "Product is expired!\n";
    }
    return 0;
}