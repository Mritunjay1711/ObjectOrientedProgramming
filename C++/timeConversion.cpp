#include<iostream>
using namespace std;

struct time
{
    int hour;
    int min;
    int sec;
};

void convert(struct time *t, int sec)
{
    int temp = sec;
    t->hour = temp /3600;
    temp = sec % 3600;
    t->min = temp / 60;
    temp = sec % 60;
    t->sec = temp;
}

int main()
{
    struct time t;
    int sec;
    cout<<"Enter the time in seconds: ";
    cin>>sec;
    convert(&t, sec);
    cout<<t.hour<<" hours "<<t.min<<" minutes "<< t.sec <<" seconds "<<endl;  
    return 0;
}