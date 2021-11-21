#include<iostream>
using namespace std;

template<class T>
void swapData(T &a, T &b)
{
    T x = a;
    a = b;
    b = x;
}

int main(){
    int a = 10, b = 30;
    cout << "Before swapping: a = " << a << " b = " << b << endl;
    swapData(a, b);
    cout << "After swapping: a = " << a << " b = " << b << endl;
    return 0;
}