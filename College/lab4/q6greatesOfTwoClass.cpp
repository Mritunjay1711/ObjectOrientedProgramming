#include<iostream>
using namespace std;

class B;

class A{
    int data;
    friend void compare(A, B);
    public:
        void setData(int x){
            data = x;
        }
        void display(){
            cout << "Data = " << data << endl;
        }
};

class B{
    int data;
    friend void compare(A, B);
    public:
        void setData(int y){
            data = y;
        }
        void display(){
            cout << "Data = " << data << endl;
        }
};

void compare(A o1, B o2)
{
    if(o1.data > o2.data)
        o1.display();
    else
        o2.display();
}

int main(){
    A o1;
    B o2;
    o1.setData(5);
    o2.setData(10);
    compare(o1, o2);
    return 0;
}