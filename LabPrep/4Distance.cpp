#include<iostream>
#include<math.h>
using namespace std;

class point
{
    int x, y;
public:
    point(int a = 0, int b = 0){x = a; y = b;}
    void operator-(point ob)
    {
        float dis = sqrt(pow((x - ob.x), 2) + pow((y - ob.y), 2));
        cout << "Distance between points is " << dis << endl;
    }
    void Display()
    {
        cout << "( " << x << ", " << y << ")" << endl;
    }
};

int main(){
    point ob1(1, 1), ob2(4, 4);
    ob2-ob1;
    return 0;
}