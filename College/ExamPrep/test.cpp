#include <iostream>
using namespace std;

int main()
{
    void test1();
    void test2();

    test1();

    return 0;
}
void test1()
{
    test2();
    cout << "One\n";
}
void test2()
{
    cout << "Two\n";
}
