#include<iostream>
using namespace std;

class A
{
    public:
        virtual void draw(){}
};
class B : public A
{
    public:
        virtual void draw(){}
};

int main(){
    cout << sizeof(B) << endl;
    return 0;
}