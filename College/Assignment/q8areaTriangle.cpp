#include<iostream>
#include<math.h>
using namespace std;

double area(float a, float b)
{
    return 1/2.0 * (sqrt(((a * a) - ((b * b)/4)))*b);
}

double area(int a)
{
    return sqrt(3)/4 * pow(a, 2);
}

double area(int a, int b, int c)
{
    float s = (a + b + c)/2.0;
    return sqrt(s*(s - a) * (s - b) * (s - c));
}

int main(){
    cout << "The area of scalene triangle is " << area(3, 5, 6) << endl;
    cout << "The area of isosceles triangle is " << area(5, 7) << endl;
    cout << "The area of equilateral triangle is " << area(5) << endl;
    return 0;
}