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
    friend Distance operator+(int a, Distance ob);
};

Distance operator+(int a, Distance ob)
{
    Distance temp;
    temp.feet_26 = ob.feet_26;
    temp.inches_26 = a + ob.inches_26;
    if(temp.inches_26 > 12)
    {
        temp.feet_26 += (temp.inches_26/12);
        temp.inches_26 %= 12;
    }
    return temp;
}

int main(){
    Distance ob1(4, 9), ob2;
    ob2 = 5 + ob1;
    ob1.display();
    ob2.display();
    return 0;
}