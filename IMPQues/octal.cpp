#include<iostream>
using namespace std ;
class Octal
{
    public:
    int integer ; float decimal;
    Octal(int x, float y = 0.0)
    {
        integer = x;
        decimal = y;
    }
    
    void addition(Octal o1, Octal o2, Octal o3 = Octal(2, 9))
    {
        cout<<"Addition of Integer values : "<<(o1.integer+o2.integer+o3.integer)<<endl;
        cout<<"Addition of Decimal values : "<<(o1.decimal+o2.decimal+o3.decimal)<<endl;
    }
    void Display()
    {
        cout<<"Integer : "<<integer<<endl;
        cout<<"Decimal : "<<decimal<<endl;
    }
};
int main()
{
    Octal o1(1,2.5);
    Octal o2(2,3.5);
    Octal o3(3,4.5);
    o1.Display();o2.Display();o3.Display();
    o1.addition(o1,o2,o3);
    return 0;
}