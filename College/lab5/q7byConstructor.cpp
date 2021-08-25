#include<iostream>
#include<string.h>
using namespace std;

class Books{
    char *title;
    char *author;
    float price;
    char *publisher;
    int stock;
    public:
        void setData(char *t, char *a, float pr, char *p, int st)
        {
            title = new char[strlen(t) + 1];
            author = new char[strlen(a) + 1];
            publisher = new char[strlen(p) + 1];
            strcpy(title, t);
            strcpy(author, a);
            price = pr;
            strcpy(publisher, p);
            stock = st;
        }
        void display()
        {
            cout << "The details of book are\n";
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: " << price << endl;
            cout << "Publisher: " << publisher << endl;
            cout << "Stock: " << stock << endl;
        }
        friend void search(Books *b, int n, char *t, char *a);
};

void search(Books *b, int n, char *t, char *a)
{
    for(int i = 0; i < n; i++)
    {
        if(strcmp(b[i].title, t) == 0 && strcmp(b[i].author, a) == 0)
        {
            int count;
            cout << "Enter the number of books you want: ";
            cin >> count;
            if(b[i].stock > count)
            {
                float bill = b[i].price * count;
                cout << "Your bill : Rs. " << bill << endl;
            }
            else
                cout << "Required copies not in stock!\n";
            return;
        }
        
    }
    cout << "Book is not currently available! Sorry for the incovenience caused!\n";
}

int main(){
    int n, stock;
    float price;
    char title[30], author[30], publisher[30];
    cout << "Enter the number of books: ";
    cin >> n;
    Books arr[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter the name of book: ";
        getchar();
        gets(title);
        cout << "Enter the name of author: ";
        getchar();
        gets(author);
        cout << "Enter the price of book: ";
        cin >> price;
        cout << "Enter the name of publisher: ";
        getchar();
        gets(publisher);
        cout << "Enter the stock present: ";
        cin >> stock;
        arr[i].setData(title, author, price, publisher, stock);
    }
    char sTitle[30], sAuthor[30];
    cout << "Enter the name of book to search: ";
    getchar();
    gets(sTitle);
    cout << "Enter the name of author to search: ";
    getchar();
    gets(sAuthor);
    search(arr, n, sTitle, sAuthor);
    return 0;
}


/*
OOP
abc
324
dfjkd
23
DSA
xyz
343
dfk
21
*/