#include<iostream>
using namespace std;

class test
{
public:
    int *p;
    int len;

    test()
    {
        p = new int[1];
        len = 1;
    }

    test(char *arr, int n)
    {
        len = n;
        p = new int[n];
        for(int i = 0; i < n; i++)
        {
            p[i] = arr[i];
        }
    }

    test(const test &t)
    {
        len = t.len;
        p = new int[len];
        for(int i = 0; i < len; i++)
        {
            p[i] = t.p[i];
        }
    }

    ~test()
    {
        delete[] p;
    }


};

int main(){
    test *p1 = new test();

    cout << p1->p << endl;
    return 0;
}