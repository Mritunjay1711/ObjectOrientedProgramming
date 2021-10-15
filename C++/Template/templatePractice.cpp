#include<iostream>
using namespace std;

template<class T>

class complex{
    T real, img;
    public:
        complex(){}
        complex(T a, T b)
        {
            real = a;
            img = b;
        }
        void add(complex ob1, complex ob2)
        {
            real = ob1.real + ob2.real;
            img = ob1.img + ob2.img;
        }
        void display()
        {
            cout << real << " + " << img << "i\n";
        }
};

int main(){
    complex <float>ob1(3.3, 5.6);  
    complex <float>ob2(4.2, 2.9);
    complex <float>ob3;
    ob3.add(ob1, ob2);
    ob3.display();  
    return 0;
}