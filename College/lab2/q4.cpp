#include<iostream>
using namespace std;

class complex_26
{
    int real;
    int imag;

    public:
        void getData();
        void display();
};

void complex_26 :: getData()
{
    cout << "Enter the real part: ";
    cin >> real;
    cout << "Enter the imaginary part: ";
    cin >> imag;
}

void complex_26 :: display()
{
    cout << real << " + i"<< imag << endl;
}

int main(){
    int n_26;
    cout << "Enter the number of complex numbers: ";
    cin >> n_26;
    complex_26 c_26[n_26];

    for(int i_26 = 0; i_26 < n_26; i_26++)
    {
        cout << "Enter the complex number "<< i_26 + 1 << endl;
        c_26[i_26].getData();
    }
    for(int i_26 = 0; i_26 < n_26; i_26++)
    {
        cout << "Complex number " << i_26 + 1 << " : ";
        c_26[i_26].display();
    }
    return 0;
}