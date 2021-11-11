#include<iostream>
using namespace std;

class Distance
{
    int feet_26, inches_26;
public:
    Distance()
    {
        feet_26 = inches_26 = 0;
    }
    Distance(int a, int b)
    {
        feet_26 = a;
        inches_26 = b;
    }
    void display()
    {
        cout << feet_26 << "feet_26 " << inches_26 << "inches_26\n";
    }
    Distance operator+(Distance ob)
    {
        Distance temp;
        temp.inches_26 = inches_26 + ob.inches_26;
        temp.feet_26 = feet_26 + ob.feet_26 + (temp.inches_26/12);
        temp.inches_26 %= 12;
        return temp;
    }
};

int main(){
    Distance ob1(2, 7), ob2(4, 6), ob3;
    ob3 = ob1 + ob2;
    ob1.display();
    ob2.display();
    ob3.display();
    return 0;
}