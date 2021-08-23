#include<iostream>
using namespace std;

class person{
    int age;
    public:
        person(void){}
        person(int a){age = a;}
        void display()
        {
            cout << age << endl;
        }
        person max_age(person);
};

person person :: max_age(person p2)
{
    person temp;
    if(age > p2.age)
        temp.age = age;
    else
        temp.age = p2.age;
    return temp;
}

int main(){
    person P1(1.5);
    person P2(2.5);
    person P3 = P1.max_age(P2);
    P3.display();
    return 0;
}