#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        Complex(int, int);
        void display()
        {
            cout << "Number is " << a << " + " << b << "i" << endl;
        }
};

Complex :: Complex(int x, int y) // --> Parameterized constructor as it takes two parameters
{
    a = x;
    b = y;
}

int main(){
    // Implicit call
    Complex a(4, 7);

    // Explicit call
    Complex b = Complex(5, 6);
    
    a.display();
    b.display();
    return 0;
}