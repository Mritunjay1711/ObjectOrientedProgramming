#include<iostream>
using namespace std;

class time
{
    int hour_26, min_26;
    public:
        time()
        {
            hour_26 = 0;
            min_26 = 0;
        }
        
        time(int a, int b = 0)
        {
            hour_26 = a;
            min_26 = b;
        }

        time(const time &o)
        {
            hour_26 = o.hour_26;
            min_26 = o.min_26;
        }

        void display()
        {
            cout << hour_26 << ":" << min_26 << endl;
        }
};

int main(){
    time o1_26(12);
    time o2_26(10, 55);

    o1_26.display();
    o2_26.display();
    return 0;
}