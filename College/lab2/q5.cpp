#include<iostream>
using namespace std;

class distance_26
{
    int feet;
    int inches;

    public:
        void setData(int f, int i);
        void display();
        void add(distance_26 d1, distance_26 d2);
};

void distance_26 :: setData(int f, int i)
{
    feet = f;
    inches = i;
}

void distance_26 :: display()
{
    cout << feet << "feet " << inches << "inches"<<endl;
}

void distance_26 :: add(distance_26 d1, distance_26 d2)
{
    inches = d1.inches + d2.inches;
    feet = d1.feet + d2.feet + (inches / 12);
    inches %= 12;
}

int main(){
    distance_26 d1_26, d2_26, d3_26;
    d1_26.setData(5, 9);
    d2_26.setData(3, 8);
    d3_26.add(d1_26, d2_26);
    
    d1_26.display();
    d2_26.display();
    d3_26.display();
    return 0;
}
