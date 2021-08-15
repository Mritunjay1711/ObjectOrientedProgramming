#include<iostream>
using namespace std;

class A{
    public:
    int x, y;
    char c;
};

int main(){
    int A ::* p1 = &A :: x;
    int A ::* p2 = &A :: y;
    char A ::* c1 = &A :: c;

    A ob, *ob1;
    ob1 = &ob;
    ob.*p1 = 10;
    ob.*p2 = 20;
    ob.c = 'a';
    cout << ob.*p1 << endl;
    cout << ob.*p2 << endl;
    cout << ob.*c1 << endl;
    // Accessing by pointer to object
    cout << ob1->*p1 << endl;
    cout << ob1->*p2 << endl;
    cout << ob1->*c1 << endl;
    return 0;
}