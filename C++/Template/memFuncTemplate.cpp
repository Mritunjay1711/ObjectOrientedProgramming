#include<iostream>
using namespace std;

template <class T>
class temp
{
    T data;
    public:
        temp(T a)
        {
            data = a;
        }
        void display();
};

template <class T>
void temp<T> :: display()
{
    cout << data << endl;
}

int main(){
    temp<int> obj(4);
    temp<char> ob1('d');
    temp<float> ob2(4.22f);

    obj.display();
    ob1.display();
    ob2.display();
    return 0;
}