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
    friend Complex operator++(Complex &ob);
};

Complex operator++(Complex &ob)
{
    ++ob.real;
    ++ob.img;
    return ob;
}

int main(){
    Complex ob(3, 5), ob2;
    ++ob;
    ob.display();
    ob2 = ++ob;
    ob2.display();
    return 0;
}