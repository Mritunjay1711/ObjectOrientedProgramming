#include<iostream>
using namespace std;

class M
{
    public:
        M(){cout << "Constructor of M\n";}
};

class N
{
    public:
        N(){cout << "Constructor of N\n";}
};

class A : virtual public N, virtual public M
{
    public:
        A(){cout << "Constructor of A\n";}
};

class B : virtual public M, virtual public N
{
    public:
        B(){cout << "Constructor of B\n";}
};

class C : public B, public A
{
    public:
        C(){cout << "Constructor of C\n";}
};

int main(){
    C ob;
    return 0;
}