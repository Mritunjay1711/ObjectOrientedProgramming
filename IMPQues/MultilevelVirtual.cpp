#include<iostream>
using namespace std;

class A
{
protected:
    int x;
public:
    A(int a = 0){x = a;}
    virtual void display(){}
};

class B : public A
{
protected:
    int y;
public:
    B(int a, int b = 0): A(a){y = b;}
    virtual void display(){ cout << x << y << endl;}
};

class C : public B
{
protected:
    int z;
public:
    C(int a, int b, int c = 0) : B(a, b){z = c;}
    void display()
    {
        cout << x << y << z << endl;
    }
};

int main(){
    A *bptr;

    B ob1(10, 30);
    bptr = &ob1;
    bptr->display();

    C ob2(10, 20, 30);
    bptr = &ob2;
    bptr->display();
    return 0;
}