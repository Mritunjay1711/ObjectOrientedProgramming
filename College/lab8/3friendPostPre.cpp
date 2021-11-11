#include <iostream>
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
    friend time operator++(time &ob);
    friend time operator++(time &ob, int);
    friend time operator--(time &ob);
    friend time operator--(time &ob, int);
};

time operator++(time &ob)
{
    ++ob.sec;
    if (ob.sec >= 60)
    {
        ++ob.min;
        ob.sec -= 60;
    }
    if (ob.min >= 60)
    {
        ++ob.hour;
        ob.min -= 60;
    }
    return ob;
}

time operator++(time &ob, int)
{
    time t;
    t.sec = ob.sec++;
    t.min = ob.min;
    t.hour = ob.hour;
    if (ob.sec >= 60)
    {
        ob.min++;
        ob.sec -= 60;
    }
    if (ob.min >= 60)
    {
        ob.hour++;
        ob.min -= 60;
    }
    return t;
}

time operator--(time &ob)
{
    --ob.sec;
    if (ob.sec < 0)
    {
        ob.sec += 60;
        --ob.min;
    }
    if (ob.min < 0)
    {
        ob.min += 60;
        --ob.hour;
    }
    return ob;
}

time operator--(time &ob, int)
{
    time temp;
    temp.sec = ob.sec--;
    temp.min = ob.min;
    temp.hour = ob.hour;
    if (ob.sec < 0)
    {
        ob.sec += 60;
        --ob.min;
    }
    if (ob.min < 0)
    {
        ob.min += 60;
        --ob.hour;
    }
    return temp;
}

int main()
{
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