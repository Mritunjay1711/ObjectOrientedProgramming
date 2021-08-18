#include<iostream>
#include<string.h>
using namespace std;

class record{
    char name_26[20];
    char author_26[20];
    float price_26;
    public:
        friend void disInRange(record *ob, int n, float lowerRange, float upperRange);
        void setData(char *s, char *t, float p)
        {
            strcpy(name_26, s);
            strcpy(author_26, t);
            price_26 = p;
        }
        void display()
        {
            cout << "Name: " << name_26 << endl;
            cout << "Author: " << author_26 << endl;
            cout << "Price: " << price_26 << endl;
        }
};

void disInRange(record *ob, int n, float lowerRange, float upperRange)
{
    for(int i = 0; i < n; i++)
    {
        if(ob[i].price_26 >= lowerRange && ob[i].price_26 <= upperRange)
        {
            ob[i].display();
        }
    }
}

int main(){
    int n_26;
    char name_26[20], author_26[20];
    float price_26, lowerRange_26, upperRange_26;
    cout << "Enter the number of books: ";
    cin >> n_26;
    record ob_26[n_26];
    for(int i = 0; i < n_26; i++)
    {
        cout << "Enter the name of book: ";
        getchar();
        gets(name_26);
        cout << "Enter the name of author: ";
        getchar();
        gets(author_26);
        cout << "Enter the price of book: ";
        cin >> price_26;
        ob_26[i].setData(name_26, author_26, price_26);
    }

    cout << "Enter the lower range of price: ";
    cin >> lowerRange_26;
    cout << "Enter the upper range of price: ";
    cin >> upperRange_26;
    disInRange(ob_26, n_26, lowerRange_26, upperRange_26);
    return 0;
}