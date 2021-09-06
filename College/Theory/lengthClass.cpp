#include<iostream>
using namespace std;

class length
{
    int feet, inches;
    static int count;
public:
    length(){++count; feet = 0; inches = 0;}
    length(int a, int b)
    {
        ++count;
        feet = a;
        inches = b;
    }
    length(const length &o)
    {
        ++count;
        feet = o.feet;
        inches = o.inches;
    }

    ~length(){}

    void display()
    {
        cout << feet << "feets " << inches << "inches" << endl;
    }
    static void countObject()
    {
        cout << "The number of objects created are " << count << endl;
    }
    friend void compare(length l1, length l2);
};

int length :: count;

void compare(length l1, length l2)
{
    float temp1 = l1.feet + (l1.inches * 0.0833);
    float temp2 = l2.feet + (l2.inches * 0.0833);
    cout << "The greater length is \n";
    if(temp1 > temp2)
        l1.display();
    else
        l2.display();
}

int main(){
    int a, b;
    cout << "Enter the data for first object: ";
    cin >> a >> b;
    length l1(a, b);

    cout << "Enter the data for second object: ";
    cin >> a >> b;
    length l2(a, b);

    compare(l1, l2);
    length :: countObject();
    
    return 0;
}