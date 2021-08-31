#include<iostream>
using namespace std;

class test
{
    int a;
    static int c;
    public:
        test()
        {
            a = 0;
            cout << "The object number created is " << ++c << endl;
        }

        test(int i)
        {
            a = i;
            cout << "The object number created is " << ++c << endl;
        }

        test(const test &t)
        {
            a = t.a;
            cout << "The object number created is " << ++c << endl;
        }

        ~test()
        {
            cout << "The objest number destroyed is " << c-- << endl;
        }
};

int test :: c;

int main(){
    test t1, t2(9), t3(t2);
    int i = 10, j = 11;  

    if(i < j)
    {
        test t4(t3), t5;
        t5 = t4;
    }  
    return 0;
}