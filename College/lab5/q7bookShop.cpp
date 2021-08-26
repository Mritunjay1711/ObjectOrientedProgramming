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

        ~Books()
        {
            delete[] title;
            delete[] author;
            delete[] publisher;
        }
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
    int n_26, stock_26;
    float price_26;
    char title_26[30], author_26[30], publisher_26[30];
    cout << "Enter the number of books: ";
    cin >> n_26;
    Books arr_26[n_26];
    for(int i = 0; i < n_26; i++)
    {
        cout << "Enter the name of book: ";
        getchar();
        gets(title_26);
        cout << "Enter the name of author: ";
        getchar();
        gets(author_26);
        cout << "Enter the price of book: ";
        cin >> price_26;
        cout << "Enter the name of publisher: ";
        getchar();
        gets(publisher_26);
        cout << "Enter the stock present: ";
        cin >> stock_26;
        arr_26[i].setData(title_26, author_26, price_26, publisher_26, stock_26);
    }
    char sTitle_26[30], sAuthor_26[30];
    cout << "Enter the name of book to search: ";
    getchar();
    gets(sTitle_26);
    cout << "Enter the name of author to search: ";
    getchar();
    gets(sAuthor_26);
    search(arr_26, n_26, sTitle_26, sAuthor_26);
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