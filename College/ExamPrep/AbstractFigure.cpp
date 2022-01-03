#include<iostream>
#include<math.h>
using namespace std;

class Figure
{
protected:
    int len, br;
public:
    Figure(int a = 0, int b = 0){len = a; br = b;}
    virtual void area() = 0;
};

class Triangle : public Figure
{
public:
    Triangle(int a, int b):Figure(a, b){}
    void area()
    {
        float area = 0;
        area = (1/2.0) * len * br;
        cout << "Area of triangle is " << area << "sq. units\n";
    }
};

class Rectangle : public Figure
{
public:
    Rectangle(int a, int b) : Figure(a, b){}
    void area()
    {
        float area;
        area = len * br;
        cout << "Area of rectangle is " << area << "sq. units\n";
    }

};

int main(){
    Figure *bptr;
    Triangle ob1(4, 9);
    Rectangle ob2(8, 9);
    bptr = &ob1;
    bptr->area();

    bptr = &ob2;
    bptr->area();
    return 0;
}