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
    int n;
    cout << "Enter the number of objects: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int j, k;
        cout << "Enter the elements of object " << i + 1 << ": ";
        test t[i](j, k);
    }
    return 0;
}