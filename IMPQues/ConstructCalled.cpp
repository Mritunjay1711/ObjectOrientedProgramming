#include<iostream>
using namespace std;

class A
{
    int a;
public:
    A(){
        cout << "A is called\n";
    }
};

class B
{
    static A a;
public:
    B(){
        cout << "B is called\n";
    }
    static A get()
    {
        return a;
    }
};

A B :: a;

int main(int argc, char const *arv[]){
    B b;
    A a1 = b.get();
    A a2 = b.get();
    A a3 = b.get();
    return 0;
}