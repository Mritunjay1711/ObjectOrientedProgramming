#include<iostream>
using namespace std;

class time
{
    int hour, min;
    public:
        time()
        {
            hour = 0;
            min = 0;
        }
        
        time(int a, int b = 0)
        {
            hour = a;
            min = b;
        }

        time(const time &o)
        {
            hour = o.hour;
            min = o.min;
        }

        void display()
        {
            cout << hour << ":" << min << endl;
        }
};

int main(){
    time o1(12);
    time o2(10, 55);

    o1.display();
    o2.display();
    return 0;
}