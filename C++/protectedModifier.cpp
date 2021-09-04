#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

/*
For a protected member:
                        Public Derivation        Private Derivation     Protected Derivation  
    1. Private Member    Not inherited            Not inherited             Not inherited
    2. Protected Mem     Protected                Private                   Protected
    3. Public Member     Public                   Private                   Protected
*/

class Derived : protected Base
{
    public:
        void setdata()
        {
            a = 10;
        }

        void display()
        {
            cout << a << endl;
        }
};

int main()
{
    Base b;
    Derived d;
    // Cout << d.a; // It will not run bcz a is protected in both Base and Derived class
    d.setdata();
    d.display();
    return 0;
}