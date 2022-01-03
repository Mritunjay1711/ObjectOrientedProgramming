#include<iostream>
using namespace std;

class Distance
{
    int feet, inches;
public:
    Distance(int a = 0, int b = 0)
    {
        feet = a;
        inches = b;
    }
    void display()
    {
        cout << feet << "feet " << inches << "inches\n";
    }
    Distance operator>(const Distance &ob)
    {
        float temp1 = feet + (inches/12.0);
        float temp2 = ob.feet + (ob.inches/12.0);
        if(temp1 > temp2)
            return *this;
        else
            return ob;
    }
    bool operator==(const Distance &ob)
    {
        float temp1 = feet + (inches/12.0);
        float temp2 = ob.feet + (ob.inches/12.0);
        return temp1 == temp2;
    }
};

int main(){
    Distance ob1(5, 10), ob2(6, 4), ob3;
    ob3 = ob1 > ob2;
    if(ob1 == ob2)
        cout << "Equal distance!\n";
    else
        cout << "Not equal distance!\n";
    ob1.display();
    ob2.display();
    ob3.display();
    return 0;
}