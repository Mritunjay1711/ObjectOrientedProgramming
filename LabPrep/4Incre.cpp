#include<iostream>
using namespace std;

void incr(int &x, int y = 1)
{
    x += y;
}

int main(){
    int x = 10, a = 8;
    cout << "x = " << x << endl;
    cout << "a = " << a << endl;
    incr(x, 5);
    incr(a);
    cout << "x = " << x << endl;
    cout << "a = " << a << endl;
    return 0;
}
