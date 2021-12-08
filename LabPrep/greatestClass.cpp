#include<iostream>
using namespace std;

class B;

class A
{
    int a;
public:
    A(int x = 0){a = x;}
    void display()
    {
        cout << "Value of a: " << a << endl;
    }
    friend void compare(A, B);
};

class B
{
    int b;
public:
    B(int y = 0){b = y;}
    void display()
    {
        cout << "Value of b: " << b << endl;
    }
    friend void compare(A, B);
};

void compare(A ob1, B ob2)
{
    if(ob1.a > ob2.b)
    {
        cout << "Value of a is greater!\n";
    }
    else if(ob1.a < ob2.b)
        cout << "Value of b is greater\n";
    else
        cout << "Both values are same\n";
}

int main(){
    A ob(21);
    B ob1(19);
    compare(ob, ob1);
    return 0;
}