#include<iostream>
#include<iomanip>
using namespace std;

class Number
{
protected:
    int num_26;
public:
    Number(int a = 0){num_26 = a;}
    virtual void display() = 0;
};

class hexadecimal : public Number
{
public:
    hexadecimal(int a) : Number(a){}
    void display()
    {
        cout << "Number: " << hex << num_26 << endl;
    }
};

class octal : public Number
{
public:
    octal(int a) : Number(a){}
    void display()
    {
        cout << "Number: " << oct << num_26 << endl;
    }
};

class decimal : public Number
{
public: 
    decimal(int a) : Number(a){}
    void display()
    {
        cout << "Number: " << num_26 << endl;
    }
};

int main(){
    Number *bptr;
    hexadecimal hex(20);
    octal oct(20);
    decimal dec(20);
    bptr = &dec;
    bptr->display();
    bptr = &hex;
    bptr->display();
    bptr = &oct;
    bptr->display();
    return 0;
}