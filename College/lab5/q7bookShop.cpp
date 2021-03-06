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
        Books(){}
        Books(char const *t, char const *a, float pr, char const *p, int st)
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
        Books(const Books &ob)
        {
            title = new char[strlen(ob.title) + 1];
            author = new char[strlen(ob.author) + 1];
            publisher = new char[strlen(ob.publisher) + 1];
            strcpy(title, ob.title);
            strcpy(author, ob.author);
            price = ob.price;
            strcpy(publisher, ob.publisher);
            stock = ob.stock;
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
    Books arr_26[3] = {{"DSA", "Reema", 435.00f, "Oxford", 23}, {"OOP", "Balaguru", 424.85f, "MC Graw", 12}, {"Math", "Jay Levore", 452.53f, "Oxford", 9}};

    for(int i = 0; i < 3; i++)
    {
        arr_26[i].display();
    }
    char sTitle_26[30], sAuthor_26[30];
    cout << "Enter the name of book to search: ";
    gets(sTitle_26);
    cout << "Enter the name of author to search: ";
    gets(sAuthor_26);
    search(arr_26, 3, sTitle_26, sAuthor_26);
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