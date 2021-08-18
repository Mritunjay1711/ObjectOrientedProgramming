#include<iostream>
using namespace std;

class disMeter;

class disFeet{
    int feet_26;
    int inches_26;
    friend void largerDis(disFeet, disMeter);
    public:
        void setData(int a, int b)
        {
            feet_26 = a;
            inches_26 = b;
        }
        void display(){
            cout << feet_26 << "feets " << inches_26 << " inches" << endl;
        }
};

class disMeter{
    int meter_26;
    int centi_26;
    friend void largerDis(disFeet, disMeter);
    public:
        void setData(int a, int b)
        {
            meter_26 = a;
            centi_26 = b;
        }
        void display(){
            cout << meter_26 << "meter " << centi_26 << " centi" << endl;
        }
};

void largerDis(disFeet o1, disMeter o2)
{
    float dis1 = (o1.feet_26 * 0.3048) + (o1.inches_26 * 0.0254);
    float dis2 = o2.meter_26 + (o2.centi_26/100.00);
    if(dis1 > dis2)
        o1.display();
    else
        o2.display();
}

int main(){
    disFeet o1_26;
    disMeter o2_26;
    o1_26.setData(9, 2);
    o2_26.setData(1, 20);
    largerDis(o1_26, o2_26);
    return 0;
}