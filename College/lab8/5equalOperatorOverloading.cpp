#include<iostream>
using namespace std;

class complex
{
    int real, img;
public:
    friend istream &operator>>(istream &in, complex &ob);
    friend ostream &operator<<(ostream &out, const complex &ob);
    bool operator==(const complex &ob)
    {
        if(real == ob.real && img == ob.img)
            return true;
        else
            return false;
    }
    complex operator=(const complex &ob)
    {
        real = ob.real;
        img = ob.img;
        return *this;
    }
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
    complex ob1, ob2, ob3;
    cin >> ob1 >> ob2;
    if(ob1 == ob2)
        cout << "Both are equal!\n";
    else
        cout << "Both are not equal!\n";
    
    ob3 = ob1;
    cout << ob1 << ob2 << ob3;
    return 0;
}