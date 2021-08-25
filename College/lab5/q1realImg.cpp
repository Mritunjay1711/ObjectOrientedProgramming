#include<iostream>
using namespace std;

class complex{
    int real, img;
    public:
        complex(){
            real = 0;
            img = 0;
        }
        complex(int a, int b)
        {
            real = a;
            img = b;
        }
        complex(const complex &o)
        {
            real = o.real;
            img = o.img;
        }

        void display()
        {
            cout << real << " + " << img << "i" << endl;
        }
};

int main(){
    complex ob1;
    complex ob2(10, 20);
    complex ob3(ob2);

    ob1.display();
    ob2.display();
    ob3.display();
    return 0;
}