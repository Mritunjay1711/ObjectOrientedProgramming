#include<iostream>
using namespace std;

class Distance
{
    int feet, inches;
public:
    friend istream &operator>>(istream &in, Distance &ob);
    friend ostream &operator<<(ostream &out, const Distance &ob);
    Distance operator>(Distance ob);
    bool operator==(Distance ob);
};

istream &operator>>(istream &in, Distance &ob)
{
    cout << "Enter the distance in feet and inches: ";
    in >> ob.feet >> ob.inches;
    return in;
}

ostream &operator<<(ostream &out, const Distance &ob)
{
    cout << ob.feet << "feets " << ob.inches << "inches\n";
    return out;
}

Distance Distance :: operator>(Distance ob)
{
    float temp1, temp2;
    temp1 = feet + inches/12.0;
    temp2 = ob.feet + ob.inches/12.0;
    if(temp1 > temp2)
        return *this;
    else
        return ob;
}

bool Distance :: operator==(Distance ob)
{
    float temp1, temp2;
    temp1 = feet + inches/12.0;
    temp2 = ob.feet + ob.inches/12.0;
    return temp1 == temp2;
}

int main(){
    Distance ob1, ob2, ob3;
    cin >> ob1 >> ob2;
    ob3 = ob1 > ob2;
    if(ob1 == ob2)
        cout << "Both are equal!\n";
    else
        cout << "Both are not equal!\n";
    cout << ob1 << ob2 << ob3;
    return 0;
}