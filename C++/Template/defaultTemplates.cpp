#include<iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>

class Mj
{
    T1 a;
    T2 b;
    T3 c;
    public:
        Mj(T1 x, T2 y, T3 z)
        {
            a = x;
            b = y;
            c = z;
        }
        void display()
        {
            cout << "The value of a is " << a << endl;   
            cout << "The value of b is " << b << endl;   
            cout << "The value of c is " << c << endl;   
        }

};
int main(){
    Mj<> ob1(2, 4.9, 'M');
    ob1.display();
    cout << endl;
    Mj<float, char, char> ob2(17.11, 'M', 'J');
    ob2.display();
    return 0;
}