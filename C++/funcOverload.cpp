#include<iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return (a+b+c);
}

// Caluculate volume of cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

// Calculate volume of cube
int volume(int a)
{
    return (a * a * a);
}

// Calulate volume of cuboid
int volume(int l, int h, int b)
{
    return (l * h * b);
}

int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3, 6)<<endl;
    cout<<"The sum 3, 7 and 6 is "<<sum(3, 7, 6)<<endl;

    cout<<"Volume of cube of side 4 is "<<volume(4)<<endl; 
    cout<<"Volume of cylinder of radius 3 and height 6 is "<<volume(3, 6)<<endl;
    cout<<"Volume of cuboid of l = 3, h = 4 and b = 2 is "<<volume(3, 4, 2)<<endl;
    return 0;
}