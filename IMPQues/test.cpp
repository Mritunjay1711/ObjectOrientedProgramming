#include<iostream>

using namespace std;

template <class T, int size>

class stack
{
private:
    T *arr;
    int top;
public:
    stack()
    {
        arr = new T[size];
        top = -1;
    }
    void push()
    {
        if (top == size - 1)
        {
            cout << "\nStack overflow";
            return;
        }
        T p;
        cout << "\nEnter the element to be pushed - ";
        cin >> p;
        top++;
        arr[top] = p;
    }
    T pop()
    {
        T p = arr[top];
        top--;
        return p;
    }
    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << "\n" << arr[i];
        }
    }
};

int main()
{
    stack <int, 10> s;
    int p;
    s.display();
    s.push();
    s.push();
    s.push();
    s.push();
    s.push();
    s.push();
    s.push();
    s.push();
    s.push();
    s.push();
    s.push();
    s.push();
    s.push();
    s.push();
    s.display();
    p = s.pop();
    cout << "\nThe element popped is - " << p;
    s.display();
    return 0;
}