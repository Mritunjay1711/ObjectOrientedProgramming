#include<iostream>
using namespace std;

template<class T>
class pair1
{
    T a, b;
public:
    pair1(T x, T y)
    {
        a = x;
        b = y;
    }
    T get_max()
    {
        return a>b ? a : b;
    }
};

int main(){
    pair1<int> ob1(8, 10);
    pair1<float> ob2(12.5, 28.8);

    cout << ob1.get_max() << endl;
    cout << ob2.get_max() << endl;
    return 0;
}