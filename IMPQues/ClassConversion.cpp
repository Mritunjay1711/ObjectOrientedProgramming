#include<iostream>
using namespace std;

class celcius
{
    float c;
public: 
    celcius(int x = 0){c = x;}
    friend class fahrenheit;
    void display()
    {
        cout << "Temperature in celcius: " << c << endl;
    }
};

class fahrenheit
{
    float f;
public:
    fahrenheit(int y = 0){f = y;}
    fahrenheit operator>(celcius ob)
    {
        f = 32 + ob.c*(9/5.0);
        return *this;
    }
    void display()
    {
        cout << "Temperature in fahrenheit: " << f << endl;
    }
};


int main(){
    celcius ob(37);
    fahrenheit ob2;
    ob2>ob;
    ob2.display();
    return 0;
}