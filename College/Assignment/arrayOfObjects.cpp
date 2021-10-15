#include<iostream>
using namespace std;

class A
{
    int a;
public:
    A(){a = 0;}
    A(int i ){a = i;}
    void display() const
    {
        cout << a << endl;
    }
};

int main(){
    A ob[5];
    int a;
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter the data: ";
        cin >> a;
        ob[i] = A(a);
    }
    for(int i = 0; i < 5; i++)
    {
        ob[i].display();
    }
    return 0;
}