#include<iostream>
#include<iomanip>
using namespace std;

class num{
    int a;
    float b;
    public:
    num(){a = 0; b = 0;}
    num(int x, float y = 0){a = x; b = y;}
    num(float y, int x = 0){a = x; b = y;}
    void display()
    {
        cout << a << " " << setprecision(2) << b << endl;
    }
};

int main(){
    num o1;
    num o2(3);
    num o3(5.3f);
    num o4(3, 9.4f);

    o1.display();
    o2.display();
    o3.display();
    o4.display();
    return 0;
}