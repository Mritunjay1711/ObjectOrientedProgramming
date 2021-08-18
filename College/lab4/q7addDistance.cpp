#include<iostream>
using namespace std;

class disMeter;

class disFeet{
    int feet_26;
    int inches_26;
    friend disMeter addDistance(disFeet, disMeter);
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
    friend disMeter addDistance(disFeet, disMeter);
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

disMeter addDistance(disFeet o1, disMeter o2)
{
    disMeter temp;
    float dis1 = (o1.feet_26 * 0.3048) + (o1.inches_26 * 0.0254);
    float dis2 = o2.meter_26 + (o2.centi_26/100.00);
    dis2 += dis1;
    int meter = (int)dis2;
    int centi = (dis2 - meter) * 100;
    temp.meter_26 = meter;
    temp.centi_26 = centi;
    return temp;
}

int main(){
    disFeet o1_26;
    disMeter o2_26, sum_26;
    o1_26.setData(9, 2);
    o2_26.setData(5, 4);
    sum_26 = addDistance(o1_26, o2_26);
    sum_26.display();
    return 0;
}