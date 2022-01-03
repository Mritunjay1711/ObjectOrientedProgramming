#include<iostream>
using namespace std;

class A
{
public:
    int a;
    A(){}
    A(int y){a = y;}
};

class B : virtual public A
{
    int b;
public:
    B(){}
    B(int i, int j) : A(i)
    {
        b = j;
    }
};
class C : virtual public A
{
    int c;
public:
    C(){}
    C(int i, int j) : A(i)
    {
        c = j;
    }
};

class D : public B, public C
{
    int d;
public:
    D(){}
    D(int i, int j, int k, int l) : A(i), B(i, j), C(i, k)
    {
        d = l;
    }
};

int main(){
    D ob;
    D ob1(1,2 ,3, 4);
    return 0;
}