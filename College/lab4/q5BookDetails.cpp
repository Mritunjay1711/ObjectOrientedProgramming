#include<iostream>
#include<string.h>
using namespace std;

class record{
    char name[20];
    char author[20];
    float price;
    public:
        friend void disInRange(record *ob, int n, float lowerRange, float upperRange);
        void setData(char *s, char *t, float p)
        {
            strcpy(name, s);
            strcpy(author, t);
            price = p;
        }
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Author: " << author << endl;
            cout << "Price: " << price << endl;
        }
};

void disInRange(record *ob, int n, float lowerRange, float upperRange)
{
    for(int i = 0; i < n; i++)
    {
        if(ob[i].price >= lowerRange && ob[i].price <= upperRange)
        {
            ob[i].display();
        }
    }
}

int main(){
    int n;
    char name[20], author[20];
    float price, lowerRange, upperRange;
    cout << "Enter the number of books: ";
    cin >> n;
    record ob[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter the name of book: ";
        getchar();
        gets(name);
        cout << "Enter the name of author: ";
        getchar();
        gets(author);
        cout << "Enter the price of book: ";
        cin >> price;
        ob[i].setData(name, author, price);
    }

    cout << "Enter the lower range of price: ";
    cin >> lowerRange;
    cout << "Enter the upper range of price: ";
    cin >> upperRange;
    disInRange(ob, n, lowerRange, upperRange);
    return 0;
}