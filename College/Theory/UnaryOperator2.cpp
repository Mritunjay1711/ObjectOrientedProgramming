#include<iostream>
using namespace std;

class Distance
{
    int feet, inches;
public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int a, int b)
    {
        feet = a;
        inches = b;
    }
    void display()
    {
        cout << feet << "feets " << inches << "inches\n";
    }
    bool operator>(Distance ob)
    {
        float temp1, temp2;
        temp1 = feet + inches/12.0;
        temp2 = ob.feet + ob.inches/12.0;
        return temp1 > temp2 ? true : false;
    }
    bool operator==(Distance ob)
    {
        float temp1, temp2;
        temp1 = feet + inches/12.0;
        temp2 = ob.feet + ob.inches/12.0;
        return (temp1 == temp2);
    }
};

int main(){
    Distance obj1(4, 6), obj2(5, 3);
    if(obj1 > obj2)
        cout << "Obj1 is greater!\n";
    else
        cout << "Obj2 is greater!\n";
    
    if(obj1 == obj2)
        cout << "Both are equal!\n";
    else
        cout << "Both are not equal!\n";
    return 0;
}