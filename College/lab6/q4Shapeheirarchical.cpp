#include<iostream>
#include<math.h>
using namespace std;

class shape
{
protected:
    float area;
public:
    void display()
    {
        cout << "Area: " << area << "sq. unit\n";
    }
};

class circle : public shape
{
    int radius;
public:
    void getData(int r)
    {
        radius = r;
    }
    void calc()
    {
        area = 3.14 * radius * radius;
    }
};

class rectangle : public shape
{
    int len, brea;
public:
    void getData(int l, int b)
    {
        len = l;
        brea = b;
    }
    void calc()
    {
        area = len * brea;
    }
};

class triangle : public shape
{
    int a, b, c;
public:
    void getData(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void calc()
    {
        float s = (a + b + c) / 2.0;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
    }
};

int main(){
    int rad, l, br, a, b, c;
    circle c1;
    triangle t1;
    rectangle r1;
    cout << "Radius: ";
    cin >> rad;
    cout << "Sides of rectangle:\n";
    cout << "Length: ";
    cin >> l;
    cout << "Breadth: ";
    cin >> br;
    cout << "Sides of triangle: ";
    cin >> a >> b >> c;
    c1.getData(rad);
    c1.calc();
    r1.getData(l, br);
    r1.calc();
    t1.getData(a, b, c);
    t1.calc();

    c1.display();
    r1.display();
    t1.display();
    return 0;
}