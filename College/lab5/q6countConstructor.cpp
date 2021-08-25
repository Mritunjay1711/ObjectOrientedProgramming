#include<iostream>
using namespace std;

class complex{
    int real, img;
    static int count;
    public:
        complex()
        {
            real = 0;
            img = 0;
            count++;
        }
        
        complex(int a, int b)
        {
            real = a;
            img = b;
            count++;
        }

        complex(const complex &o)
        {
            real = o.real;
            img = o.img;
            count++;
        }

        void display()
        {
            cout << real << " + " << img << "i\n";
        }

        static void showCount()
        {
            cout << count << " objects are created\n";
        }
};

int complex :: count; 

int main(){
    complex c1;
    complex c2(2, 5);
    complex c3(c2);
    complex c4 = c3;
    
    complex :: showCount();
    return 0;
}