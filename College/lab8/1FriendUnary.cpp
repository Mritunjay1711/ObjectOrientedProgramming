#include<iostream>
using namespace std;

class point
{
    int x, y, z;
public:
    point()
    {
        x = y = z = 0;
    }
    point(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display()
    {
        cout << "(" << x << ", " << y << ", " << z << ")\n";
    }
    friend point operator-(point &ob);
};

point operator-(point &ob)
{
    ob.x = -ob.x;
    ob.y = -ob.y;
    ob.z = -ob.z;
    return ob;
}

int main(){
    point ob1(3, 5, 1), ob2;
    -ob1;
    ob1.display();
    ob2 = -ob1;
    ob2.display();
    return 0;
}