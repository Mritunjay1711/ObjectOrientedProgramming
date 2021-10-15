#include<iostream>
using namespace std;

template<class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template<class T1, class T2>
float average(T1 a, T2 b)
{
    float avg = (a+b)/2.0;
    return avg;
}

int main(){
    float avg;
    avg = average(23, 43.3); //Automatically change the data type according to arguments
    cout << avg << endl;
    float x = 5.4, y = 9.2;
    swapp(x, y);
    cout << x << " " << y << endl;
    return 0;
}