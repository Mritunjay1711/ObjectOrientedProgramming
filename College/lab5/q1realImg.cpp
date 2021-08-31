#include<iostream>
using namespace std;

class complex{
    int real_26, img_26;
    public:
        complex(){
            real_26 = 0;
            img_26 = 0;
        }
        complex(int a, int b)
        {
            real_26 = a;
            img_26 = b;
        }
        complex(const complex &o)
        {
            real_26 = o.real_26;
            img_26 = o.img_26;
        }

        ~complex()
        {
            cout << "Destructor is invoked\n";
        }
        void display()
        {
            cout << real_26 << " + " << img_26 << "i" << endl;
        }
};

int main(){
    complex ob1_26;
    complex ob2_26(10, 20);
    complex ob3_26(ob2_26);

    ob1_26.display();
    ob2_26.display();
    ob3_26.display();
    return 0;
}