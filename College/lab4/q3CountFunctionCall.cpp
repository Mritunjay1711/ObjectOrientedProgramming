#include<iostream>
using namespace std;

class item{
    int a;
    public:
    static int count;
    void input(int num)
    {
        a = num;
        count++;
    }
    void diplay()
    {
        cout << "The value for data member is " << a << endl;
        cout << "The function is called " << count << " times" << endl;
    }
};

int item :: count;

int main(){
    item ob1_26, ob2_26, ob3_26;
    ob1_26.input(10);
    ob2_26.input(34);
    ob3_26.input(21);

    ob1_26.diplay();
    ob2_26.diplay();
    ob3_26.diplay();
    return 0;
}