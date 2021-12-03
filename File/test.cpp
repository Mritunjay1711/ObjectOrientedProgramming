#include<iostream>
using namespace std;

class A
{
public:
    virtual void fun1() = 0;
    virtual void fun2(){}
};

class B : public A
{
    public:
        void fun3(){cout << "hello";}
};

int main(){
    // B ob;  // cannot be done as fun1() is not overridden.
    // ob.fun3();
    return 0;
}