#include<iostream>
#include<math.h>
using namespace std;

class shape
{
protected:
    float area;
public:
    shape()
    {
        cout << "shape constructor is called!\n";
        area = 0;
    }

    void display()
    {
        cout << "Area: " << area << "sq. unit\n";
    }

    ~shape()
    {
        cout << "shape destructor is called!\n";
    }
};

class circle : public shape
{
    int radius;
public:
    circle(int r) : shape()
    {
        cout << "circle constructor is called!\n";
        radius = r;
    }
    void calc()
    {
        area = 3.14 * radius * radius;
    }

    ~circle()
    {
        cout << "circle destructor is called!\n";
    }
};

class rectangle : public shape
{
    int len, brea;
public:
    rectangle(int l, int b) : shape()
    {
        cout << "rectangle constructor is called!\n";
        len = l;
        brea = b;
    }

    void calc()
    {
        area = len * brea;
    }

    ~rectangle()
    {
        cout << "rectangle destructor is called!\n";
    }
};

class triangle : public shape
{
    int a, b, c;
public:
    triangle(int x, int y, int z) : shape()
    {
        cout << "triangle constructor is called!\n";
        a = x;
        b = y;
        c = z;
    }
    void calc()
    {
        float s = (a + b + c) / 2.0;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
    }

    ~triangle()
    {
        cout << "triangle destructor is called!\n";
    }
};

int main(){
    int rad_26, l_26, br_26, a_26, b_26, c_26;
    cout << "Radius: ";
    cin >> rad_26;
    cout << "Sides of rectangle:\n";
    cout << "Length: ";
    cin >> l_26;
    cout << "Breadth: ";
    cin >> br_26;
    cout << "Sides of triangle: ";
    cin >> a_26 >> b_26 >> c_26;
    circle c1_26(rad_26);
    c1_26.calc();
    rectangle r1_26(l_26, br_26);
    r1_26.calc();
    triangle t1_26(a_26, b_26, c_26);
    t1_26.calc();

    c1_26.display();
    r1_26.display();
    t1_26.display();
    return 0;
}