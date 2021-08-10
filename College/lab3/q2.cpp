#include<iostream>
using namespace std;

float volume(int r)
{
    return (4/3.0 * 3.14 * r * r * r);
}

float volume(int r, int h)
{
    return (3.14 * r * r * h);
}

float volume(int l, int b, int h)
{
    return (l * b * h);
}

int main(){
    cout << "The volume of sphere is " << volume(3) << endl;
    cout << "The volume of cylinder is " << volume(3, 5) << endl;
    cout << "The volume of cuboid is " << volume(8, 7, 5) << endl;
    return 0;
}