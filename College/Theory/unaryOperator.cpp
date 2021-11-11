#include<iostream>
using namespace std;

class Complex{
    int real, img;
public:
    Complex()
    {
        real = 0; 
        img = 0;
    }
    Complex(int a, int b)
    {
        real = a;
        img = b;
    }
    void display()
    {
        cout << real << " + " << img << "i\n";
    }
    void operator-()
    {
        real = -real;
        img = -img;
    }
};

int main(){
    Complex ob(3, 5);
    -ob;
    ob.display();
    return 0;
}