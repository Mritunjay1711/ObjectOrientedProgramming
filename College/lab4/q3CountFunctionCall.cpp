#include<iostream>
using namespace std;

class item{
    int a;
    public:
    static int in;
    static int out;
    void input(int num)
    {
        a = num;
        in++;
    }
    void diplay()
    {
        cout << "The value for data member is " << a << endl;
        out++;
    }
};

int item :: in;
int item :: out;

int main(){
    item ob1_26, ob2_26, ob3_26;
    ob1_26.input(10);
    ob2_26.input(34);
    ob3_26.input(21);

    ob1_26.diplay();
    ob2_26.diplay();
    ob3_26.diplay();
    cout << "The input function is called " << item::in << " times." << endl;
    cout << "The input function is called " << item::out << " times." << endl;
    return 0;
}