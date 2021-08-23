#include<iostream>
#include<math.h>
using namespace std;

float area(int a, int b)
{
    return 1/2 * (sqrt((pow(a, 2) - pow(b, 2))/4)*b);
}

float area(int a)
{
    return sqrt(3)/4 * pow(a, 2);
}

float area(int a, int b, int c)
{
    float s = (a + b + c)/2.0;
    return sqrt(s*(s - a) * (s - b) * (s - c));
}

int main(){
    cout << "The area of scalene triangle is " << area(3, 5, 6) << endl;
    cout << "The area of isosceles triangle is " << area(4, 5, 5) << endl;
    cout << "The area of equilateral triangle is " << area(5, 5, 5) << endl;
    return 0;
}