#include<iostream>
using namespace std;

class B;

class A{
    int data_26;
    friend void compare(A, B);
    public:
        void setData(int x){
            data_26 = x;
        }
        void display(){
            cout << "Data = " << data_26 << endl;
        }
};

class B{
    int data_26;
    friend void compare(A, B);
    public:
        void setData(int y){
            data_26 = y;
        }
        void display(){
            cout << "Data = " << data_26 << endl;
        }
};

void compare(A o1, B o2)
{
    if(o1.data_26 > o2.data_26)
        o1.display();
    else
        o2.display();
}

int main(){
    A o1_26;
    B o2_26;
    o1_26.setData(5);
    o2_26.setData(10);
    compare(o1_26, o2_26);
    return 0;
}