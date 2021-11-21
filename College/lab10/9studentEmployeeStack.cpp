#include <iostream>
using namespace std;

template <class T, int size>
class stack
{
    T *arr;
    int top = -1;

public:
    stack()
    {
        arr = new T[size];
    }
    int isFull()
    {
        return top == size - 1;
    }
    int isEmpty()
    {
        return top == -1;
    }
    void push(T data)
    {
        if (isFull())
        {
            cout << "Stack overflow!\n";
        }
        else
        {
            arr[++top] = data;
            cout << "Pushed " << data << "!\n";
        }
    }
    T pop()
    {
        T val;
        if (isEmpty())
        {
            cout << "Stack underflow!\n";
        }
        else
        {
            val = arr[top--];
        }
        return val;
    }
    void display()
    {
        cout << "Stack content\n";
        for (int i = top; i > -1; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

class student
{
    string name;
    int roll;
    float cgpa;

public:
    student(){};
    student(string s, int r, float c)
    {
        name = s;
        roll = r;
        cgpa = c;
    }
    student operator=(const student &ob)
    {
        name = ob.name;
        roll = ob.roll;
        cgpa = ob.cgpa;
        return *this;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
    }
    friend ostream &operator<<(ostream &out, const student &ob);
};
ostream &operator<<(ostream &out, const student &ob)
{
    out << "Name: " << ob.name << endl;
    out << "Roll: " << ob.roll << endl;
    out << "CGPA: " << ob.cgpa << endl;
    return out;
}

int main()
{
    stack<student, 4> ob1;
    student ob2("Mannu", 23, 10);
    student ob3("Mritunjay", 26, 10);
    ob1.push(ob2);
    ob1.push(ob3);
    ob1.display();
    return 0;
}