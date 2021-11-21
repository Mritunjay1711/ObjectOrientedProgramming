#include<iostream>
#include<string.h>
using namespace std;

class media
{
protected:
    char title_26[20];
    float price_26;
public:
    media(const char *t, float p)
    {
        strcpy(title_26, t);
        price_26 = p;
    }
    virtual void display(){}
};

class book : public media
{
private:
    int page_26;
public:
    book(const char *t, float p, int a) : media(t, p){ page_26 = a;}
    void display()
    {
        cout << "Title_26: " << title_26 << endl;
        cout << "Price_26: " << price_26 << endl;
        cout << "Page_26: " << page_26 << endl;
    }
};

class tape : public media
{
private:
    float time_26;
public:
    tape(const char *t, float p, float ti) : media(t, p){time_26 = ti;}
    void display()
    {
        cout << "Title_26: " << title_26 << endl;
        cout << "Price_26: " << price_26 << endl;
        cout << "Time_26: " << time_26 << endl;
    }
};

int main(){
    media *bptr;
    book ob1("OOP", 499, 264);
    bptr = &ob1;
    bptr->display();

    tape ob2("DSA", 299, 59);
    bptr = &ob2;
    bptr->display();
    return 0;
}