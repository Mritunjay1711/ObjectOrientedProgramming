#include<iostream>
using namespace std;

class test
{
    int a, b;
    public:
        test()
        {
            a = 0;
            b = 0;
        }

        test(int i, int j)
        {
            a = i;
            b = j;
        }

        test(const test &t)
        {
            a = t.a;
            b = t.b;
        }

        ~test(){}

        void display()
        {
            cout << a << " " << b << endl;
        }
};

int main(){
    test t[3] = {{2, 5}, {6, 9}, {12, 34}};

    for(int i = 0; i < 3; i++)
    {
        t[i].display();
    }
    return 0;
}