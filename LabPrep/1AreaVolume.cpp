#include<iostream>
using namespace std;

void fun_area()
{
    cout << "No argument found!\n";
}
void fun_area(float a)
{
    cout << "Area of circle is " << 3.14*a*a  << "sq. units" << endl;
}

void fun_area(float a, float b)
{
    cout << "Area of rectangle is " << a * b << "sq. units" << endl;
}

void fun_area(float a, float b, float c)
{
    cout << "Volume of box is " << a*b*c << "cubic units" << endl;
}

int main(){
    fun_area();
    fun_area(2);
    fun_area(3, 7);
    fun_area(3, 5, 5);
    return 0;
}