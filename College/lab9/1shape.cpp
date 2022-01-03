#include<iostream>
#include<math.h>
using namespace std;

class shape
{
protected:
    float area_26;
public:
    virtual void calcArea_26(){}
    virtual void display()
    {
        cout << area_26;
    }
};

class square : public shape
{
    int side_26;
public:
    square(int a = 0){side_26 = a;}
    void calcArea_26()
    {
        area_26 = side_26 * side_26;
    }
    void display()
    {
        cout << "Area_26 of square is " << area_26 << "sq. units\n";
    }
};

class circle : public shape
{
    int rad_26;
public:
    circle(int a = 0){rad_26 = a;}
    void calcArea_26()
    {
        area_26 = 3.14 * rad_26 * rad_26;
    }
    void display()
    {
        cout << "Area_26 of circle is " << area_26 << "sq. units\n";
    }
};

class triangle : public shape
{
    int x, y, z;
public:
    triangle(int a = 0, int b = 0, int c = 0){x = a, y = b, z = c;}
    void calcArea_26()
    {
        float s = (x + y + z)/2.0;
        area_26 = sqrt(s * (s - x) * (s - y) * (s - z));
    }
    void display()
    {
        cout << "Area_26 of triangle is " << area_26 << "sq. units\n";
    }
};

int main(){
    shape *bptr;
    circle ob1(4);
    square ob2(8);
    triangle ob3(3, 4, 5);
    bptr = &ob1;
    bptr->calcArea_26();
    bptr->display();

    bptr = &ob2;
    bptr->calcArea_26();
    bptr->display();

    bptr = &ob3;
    bptr->calcArea_26();
    bptr->display();
    return 0;
}