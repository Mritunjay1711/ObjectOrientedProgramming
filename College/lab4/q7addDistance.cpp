#include<iostream>
using namespace std;

class disMeter;

class disFeet{
    int feet;
    int inches;
    friend disMeter addDistance(disFeet, disMeter);
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
    friend disMeter addDistance(disFeet, disMeter);
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

disMeter addDistance(disFeet o1, disMeter o2)
{
    disMeter temp;
    float dis1 = (o1.feet * 0.3048) + (o1.inches * 0.0254);
    float dis2 = o2.meter + (o2.centi/100.00);
    dis2 += dis1;
    int meter = (int)dis2;
    int centi = (dis2 - meter) * 100;
    temp.meter = meter;
    temp.centi = centi;
    return temp;
}

int main(){
    disFeet o1;
    disMeter o2, sum;
    o1.setData(9, 2);
    o2.setData(5, 4);
    sum = addDistance(o1, o2);
    sum.display();
    return 0;
}