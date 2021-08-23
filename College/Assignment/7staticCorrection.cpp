#include<iostream>
using namespace std;

class test{
    static int x;
    int y;
    public:
        test(){y = 0;}
        static void display()
        {
            cout << x << "\t"<< endl;
        }
        void output()
        {
            cout << x << "\t" << y << endl;
        }
};

int test :: x;

int main(){
    test T1;
    T1.output();
    test :: display();
    return 0;
}