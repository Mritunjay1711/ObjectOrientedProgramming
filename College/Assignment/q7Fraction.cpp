#include <iostream>
using namespace std;

class fraction
{
    int num;
    int den;

public:
    void setData(int a, int b)
    {
        num = a;
        den = b;
    }

    void display()
    {
        cout << num << "/" << den << endl;
    }

    void simplify(fraction *o);
    fraction add(fraction o1, fraction o2);
    fraction subtract(fraction &o1, fraction &o2);
    fraction multiply(fraction *o1, fraction *o2);

};

void fraction :: simplify(fraction *o)
{
    int n = o->num > o->den ? o->den : o->num;
    int i = 1, commonDivisor = 1;
    while(i <= n)
    {
        if(o->num % i == 0 && o->den % i == 0)
        {
            commonDivisor = i;
        }
        i++;
    }
    o->num /= commonDivisor;
    o->den /= commonDivisor;
}

fraction fraction ::add(fraction o1, fraction o2)
{
    fraction temp;
    temp.num = (o1.num * o2.den) + (o1.den * o2.num);
    temp.den = o1.den * o2.den;
    simplify(&temp);
    return temp;
}

fraction fraction :: subtract(fraction &o1, fraction &o2)
{
    fraction temp;
    temp.num = (o1.num * o2.den) - (o1.den * o2.num);
    temp.den = o1.den * o2.den;
    simplify(&temp);
    return temp;
}

fraction fraction :: multiply(fraction *o1, fraction *o2)
{
    fraction temp;
    temp.num = o1->num * o2->num;
    temp.den = o1->den * o2->den;
    simplify(&temp);
    return temp;
}

int main()
{
    fraction o1_26, o2_26, o3_26, o4_26, o5_26;
    o1_26.setData(3, 5);
    o2_26.setData(4, 9);

    o3_26 = o3_26.add(o1_26, o2_26);
    o3_26.display();

    o4_26 = o4_26.subtract(o1_26, o2_26);
    o4_26.display();

    o5_26 = o5_26.multiply(&o1_26, &o2_26);
    o5_26.display();
    return 0;
}