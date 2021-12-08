#include<iostream>
using namespace std;

class Length
{
    int feet, inches;
public:
    void input(int a, int b)
    {
        feet = a;
        inches = b;
    }
    Length greater(Length ob)
    {
        float temp1 = feet + (inches/12.0);
        float temp2 = ob.feet + (ob.inches/12.0);
        if(temp1 > temp2)
            return *this;
        else
            return ob;
    }
    void display()
    {
        cout << feet << "feet " << inches << "inches\n";
    }
};

int main(){
    Length ob1, ob2, ob3;
    ob1.input(3, 9);
    ob2.input(5, 1);
    
    ob3 = ob1.greater(ob2);
    ob3.display();
    return 0;
}