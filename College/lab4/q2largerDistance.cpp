#include<iostream>
using namespace std;

class disMeter;

class disFeet{
    int feet;
    int inches;
    friend void largerDis(disFeet, disMeter);
    public:
        void setData(int a, int b)
        {
            feet = a;
            inches = b;
        }
        void display(){
            cout << feet << "feets " << inches << " inches" << endl;
        }
};

class disMeter{
    int meter;
    int centi;
    friend void largerDis(disFeet, disMeter);
    public:
        void setData(int a, int b)
        {
            meter = a;
            centi = b;
        }
        void display(){
            cout << meter << "meter " << centi << " centi" << endl;
        }
};

void largerDis(disFeet o1, disMeter o2)
{
    float dis1 = (o1.feet * 0.3048) + (o1.inches * 0.0254);
    float dis2 = o2.meter + (o2.centi/100.00);
    if(dis1 > dis2)
        o1.display();
    else
        o2.display();
}

int main(){
    disFeet o1;
    disMeter o2;
    o1.setData(9, 2);
    o2.setData(1, 20);
    largerDis(o1, o2);
    return 0;
}