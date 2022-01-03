#include <iostream>
#include <iomanip>
using namespace std;

class time
{
    int hour;
    int min;

public:
    void setData(int a, int b)
    {
        hour = a;
        min = b;
    }
    void display()
    {
        cout << fixed << setprecision(2) << hour << ":" << fixed << setprecision(2) << min << endl;
    }
};

class meeting
{
    char name[20];
    class time t;

public:
    void setData()
    {
        int a, b;
        cout << "Enter the name of person: ";
        cin >> name;
        cout << "Enter the time in hh:mm format: ";
        cin >> a >> b;
        t.setData(a, b);
    }
    void diplay()
    {
        cout << "Meeting details:\n";
        cout << "Name: " << name << endl;
        cout << "Time: ";
        t.display();
    }
};

int main()
{
    meeting meet_26;

    meet_26.setData();
    meet_26.diplay();
    return 0;
}