#include<iostream>
#include<iomanip>
using namespace std;

class Complex
{
    float real, img;
public:
    Complex()
    {
        real = img = 0;
    }
    Complex(float a, float b)
    {
        real = a;
        img = b;
    }
    void display() const
    {
        cout << setprecision(2) << real << " + " << img << "i\n";
    }
    friend Complex operator+(Complex c1, Complex c2);
    friend Complex operator-(Complex c1, Complex c2);
    friend Complex operator*(Complex c1, Complex c2);
    friend Complex operator/(Complex c1, Complex c2);
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

Complex operator-(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real - c2.real;
    temp.img = c1.img - c2.img;
    return temp;
}

Complex operator*(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real * c2.real;
    temp.img = c1.img * c2.img;
    return temp;
}

Complex operator/(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real / c2.real;
    temp.img = c1.img / c2.img;
    return temp;
}

int main(){
    Complex c1(8, 12), c2(4, 9), sum, difference, product, division;
    sum = c1 + c2;
    difference = c1 - c2;
    product = c1 * c2;
    division = c1 / c2;
    sum.display();
    difference.display();
    product.display();
    division.display();
    return 0;
}