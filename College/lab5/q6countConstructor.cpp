#include<iostream>
using namespace std;

class complex{
    int real_26, img_26;
    static int count_26;
    public:
        complex()
        {
            real_26 = 0;
            img_26 = 0;
            count_26++;
        }
        
        complex(int a, int b)
        {
            real_26 = a;
            img_26 = b;
            count_26++;
        }

        complex(const complex &o)
        {
            real_26 = o.real_26;
            img_26 = o.img_26;
            count_26++;
        }

        void display()
        {
            cout << real_26 << " + " << img_26 << "i\n";
        }

        static void showCount()
        {
            cout << count_26 << " objects are created\n";
        }
};

int complex :: count_26; 

int main(){
    complex c1_26;
    complex c2_26c1_26(2, 5);
    complex c3_26c1_26(c2_26c1_26);
    complex c4_26c1_26 = c3_26c1_26;
    
    complex :: showCount();
    return 0;
}