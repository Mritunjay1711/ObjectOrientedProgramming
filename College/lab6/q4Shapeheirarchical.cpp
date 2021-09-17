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
    int rad_26, l_26, br_26, a_26, b_26, c_26;
    circle c1_26;
    triangle t1_26;
    rectangle r1_26;
    cout << "Radius: ";
    cin >> rad_26;
    cout << "Sides of rectangle:\n";
    cout << "Length: ";
    cin >> l_26;
    cout << "Breadth: ";
    cin >> br_26;
    cout << "Sides of triangle: ";
    cin >> a_26 >> b_26 >> c_26;
    c1_26.getData(rad_26);
    c1_26.calc();
    r1_26.getData(l_26, br_26);
    r1_26.calc();
    t1_26.getData(a_26, b_26, c_26);
    t1_26.calc();

    c1_26.display();
    r1_26.display();
    t1_26.display();
    return 0;
}