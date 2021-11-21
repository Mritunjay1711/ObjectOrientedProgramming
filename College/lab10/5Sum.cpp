#include<iostream>
using namespace std;

template<class T>
class test
{
    T a, b;
public:
    test(T x, T y)
    {
        a = x;
        b = y;
    }
    T sum()
    {
        return a + b;
    }
    void display()
    {
        cout << "a = " << a << " b = " << b << endl;
    }
};

int main(){
    test<int> ob1(4, 2);
    test<float> ob2(91.2, 82.3);
    test<char> ob3('A', 'B');

    cout << ob1.sum() << endl;
    cout << ob2.sum() << endl;
    cout << ob3.sum() << endl;
    return 0;
}