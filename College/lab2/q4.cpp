#include <iostream>
using namespace std;

class complex_26
{
    int real;
    int imag;

public:
    void setData(int a, int b);
    void display() const;
};

void complex_26 ::setData(int a, int b)
{
    real = a;
    imag = b;
}

void complex_26 ::display() const
{
    cout << real << " + i" << imag << endl;
}

int main()
{
    int n_26, r, img;
    cout << "Enter the number of complex numbers: ";
    cin >> n_26;
    complex_26 c_26[n_26];

    for (int i_26 = 0; i_26 < n_26; i_26++)
    {
        cout << "Enter the complex number " << i_26 + 1 << endl;
        cout << "Enter the real part: ";
        cin >> r;
        cout << "Enter the imaginary part: ";
        cin >> img;
        c_26[i_26].setData(r, img);
    }
    
    for (int i_26 = 0; i_26 < n_26; i_26++)
    {
        cout << "Complex number " << i_26 + 1 << " : ";
        c_26[i_26].display();
    }
    return 0;
}