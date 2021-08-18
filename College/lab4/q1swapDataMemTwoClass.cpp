#include<iostream>
using namespace std;

class B;

class A{
    int x;
    public:
        friend void swap(A&, B&);
        void setData(int a){
            x = a;
        }

        void display(){
            cout << "The value of data member is " << x << endl;
        }
};


class B{
    int y;
    public:
        friend void swap(A&, B&);
        void setData(int b){
            y = b;
        }

        void display(){
            cout << "The value of data member is " << y << endl;
        }
};

void swap(A &o1, B &o2){
    int temp = o1.x;
    o1.x = o2.y;
    o2.y = temp;
}

int main(){
    A o1;
    B o2;
    o1.setData(5);
    o2.setData(6);
    o1.display();
    o2.display();

    swap(o1, o2);
    o1.display();
    o2.display();
    return 0;
}