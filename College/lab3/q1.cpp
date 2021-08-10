#include<iostream>
#include<math.h>
using namespace std;

float area(int r)
{
    return 3.14 * r * r;
}

float area(int l, int b)
{
    return l * b;
}

float area(int a, int b, int c)
{
    int s = (a + b + c)/2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main(){
    cout << "The area of circle is " << area(3) << endl;
    cout << "The area of rectangle is " << area(2, 4) << endl;
    cout << "The area of triangle is " << area(3, 4 , 4) << endl;
    return 0;
}