#include<iostream>
using namespace std;

class B;

class A{
    int x_26;
    public:
        friend void swap(A&, B&);
        void setData(int a){
            x_26 = a;
        }

        void display(){
            cout << "The value of data member is " << x_26 << endl;
        }
};


class B{
    int y_26;
    public:
        friend void swap(A&, B&);
        void setData(int b){
            y_26 = b;
        }

        void display(){
            cout << "The value of data member is " << y_26 << endl;
        }
};

void swap(A &o1, B &o2){
    int temp = o1.x_26;
    o1.x_26 = o2.y_26;
    o2.y_26 = temp;
}

int main(){
    A o1_26;
    B o2_26;
    o1_26.setData(5);
    o2_26.setData(6);
    o1_26.display();
    o2_26.display();

    swap(o1_26, o2_26);
    o1_26.display();
    o2_26.display();
    return 0;
}