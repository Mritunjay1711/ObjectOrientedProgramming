#include <iostream>
using namespace std;

class item
{
    int a_26;
    static int in_26;
    static int out_26;

public:
    void input(int num)
    {
        a_26 = num;
        in_26++;
    }
    void diplay()
    {
        cout << "The value for data member is " << a_26 << endl;
        out_26++;
    }
    static void showCount()
    {
        cout << "The input function is called " << in_26 << " times." << endl;
        cout << "The input function is called " << out_26 << " times." << endl;
    }
};

int item ::in_26;
int item ::out_26;

int main()
{
    item ob1_26, ob2_26, ob3_26;
    ob1_26.input(10);
    ob2_26.input(34);
    ob3_26.input(21);

    ob1_26.diplay();
    ob2_26.diplay();
    ob3_26.diplay();

    item :: showCount();
    return 0;
}