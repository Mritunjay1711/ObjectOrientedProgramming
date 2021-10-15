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
    Complex operator+(Complex c2);
    Complex operator-(Complex c2);
    Complex operator*(Complex c2);
    Complex operator/(Complex c2);
    void display() const
    {
        cout << setprecision(2) << real << " + " << setprecision(2) << img << "i\n";
    }
};

Complex Complex :: operator+(Complex c2)
{
    Complex temp;
    temp.real = real + c2.real;
    temp.img = img + c2.img;
    return temp;
}

Complex Complex :: operator-(Complex c2)
{
    Complex temp;
    temp.real = real - c2.real;
    temp.img = img - c2.img;
    return temp;
}

Complex Complex :: operator*(Complex c2)
{
    Complex temp;
    temp.real = real * c2.real;
    temp.img = img * c2.img;
    return temp;
}

Complex Complex :: operator/(Complex c2)
{
    Complex temp;
    temp.real = real / c2.real;
    temp.img = img / c2.img;
    return temp;
}

int main(){
    Complex c1(5, 12), c2(3, 6), sum, difference, product, division;
    sum = c1 + c2; // c1.operator+(c2)
    difference = c1 - c2;
    product = c1 * c2;
    division = c1/c2;
    sum.display();
    difference.display();
    product.display();
    division.display();
    return 0;
}