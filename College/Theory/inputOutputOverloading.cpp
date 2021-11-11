#include<iostream>
using namespace std;

class complex
{
    int real, img;
public:
    friend istream &operator>>(istream &in, complex &ob);
    friend ostream &operator<<(ostream &out, const complex &ob);
};

istream &operator>>(istream &in, complex &ob)
{
    cout << "Enter the real part: ";
    in >> ob.real;
    cout << "Enter the imaginary part: ";
    in >> ob.img;
    return in;
}

ostream &operator<<(ostream &out, const complex &ob)
{
    out << "Complex number is: ";
    out << ob.real << " + " << ob.img << "i\n";
    return out;
}

int main(){
    complex ob1, ob2;
    cin >> ob1 >> ob2;
    cout << ob1 << ob2;
    return 0;
}