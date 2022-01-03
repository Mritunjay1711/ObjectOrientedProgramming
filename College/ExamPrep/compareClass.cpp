#include <iostream>
using namespace std;
class B;
class A
{
    int x;

public:
    A(int a = 0) { x = a; }
    friend void compare(A, B);
};
class B
{
    int y;

public:
    B(int b = 0) { y = b; }
    friend void compare(A, B);
};
void compare(A a, B b)
{
    if(a.x > b.y)
        cout << "A is greater than B\n";
    else if(a.x < b.y)
        cout << "B is greater than A\n";
    else
        cout << "Both are equal\n";
}
int main()
{
    A a(30);
    B b(20);
    compare(a, b);
    return 0;
}