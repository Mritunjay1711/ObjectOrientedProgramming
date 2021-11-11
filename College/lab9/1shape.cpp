#include<iostream>
#include<math.h>
using namespace std;

class shape
{
public:
    float area;
    virtual void calcArea(){}
    virtual void display()
    {
        cout << area;
    }
};

class square : public shape
{
    int side;
public:
    square(int a = 0){side = a;}
    void calcArea()
    {
        area = side * side;
    }
    void display()
    {
        cout << "Area of square is " << area << "sq. units\n";
    }
};

class circle : public shape
{
    int rad;
public:
    circle(int a = 0){rad = a;}
    void calcArea()
    {
        area = 3.14 * rad * rad;
    }
    void display()
    {
        cout << "Area of circle is " << area << "sq. units\n";
    }
};

class triangle : public shape
{
    int x, y, z;
public:
    triangle(int a = 0, int b = 0, int c = 0){x = a, y = b, z = c;}
    void calcArea()
    {
        float s = (x + y + z)/2.0;
        area = sqrt(s * (s - x) * (s - y) * (s - z));
    }
    void display()
    {
        cout << "Area of triangle is " << area << "sq. units\n";
    }
};

int main(){
    shape *bptr;
    circle ob1(4);
    square ob2(8);
    triangle ob3(3, 4, 5);
    bptr = &ob1;
    bptr->calcArea();
    bptr->display();

    bptr = &ob2;
    bptr->calcArea();
    bptr->display();

    bptr = &ob3;
    bptr->calcArea();
    bptr->display();
    return 0;
}