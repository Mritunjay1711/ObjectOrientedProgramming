#include<iostream>
using namespace std;

class time
{
    int hour, min, sec;
public:
    time()
    {
        hour = min = sec = 0;
    }
    time(int a, int b, int c)
    {
        hour = a; 
        min = b;
        sec = c;
    }
    void display()
    {
        cout << hour << "hours " << min << "minutes " << sec << "seconds\n";
    }
    time operator++()
    {
        ++sec;
        if(sec >= 60)
        {
            ++min;
            sec -= 60;
        }
        if(min >= 60)
        {
            ++hour;
            min -= 60;
        }
        return *this;
    }
    time operator++(int)
    {
        time t;
        t.sec = sec++;
        t.min = min;
        t.hour = hour;
        if(sec >= 60)
        {
            min++;
            sec -= 60;
        }
        if(min >= 60)
        {
            hour++;
            min -= 60;
        }
        return t;
    }
    time operator--()
    {
        --sec;
        if(sec < 0)
        {
            sec += 60;
            --min;
        }
        if(min < 0)
        {
            min += 60;
            --hour;
        }
        return *this;
    }
    time operator--(int)
    {
        time temp;
        temp.sec = sec--;
        temp.min = min;
        temp.hour = hour;
        if(sec < 0)
        {
            sec += 60;
            --min;
        }
        if(min < 0)
        {
            min += 60;
            --hour;
        }
        return temp;
    }
};

int main(){
    time ob1(3, 59, 59), ob2(2, 0, 0), ob3, ob4;
    ++ob1;
    ob1.display();
    ob3 = ob1++;
    ob3.display();
    ob1.display();
    --ob2;
    ob2.display();
    ob4 = ob2--;
    ob4.display();
    ob2.display();

    return 0;
}