#include<iostream>
using namespace std;

template<class T>
class stack
{
    T *arr;
    int size;
    int top;
public:
    stack(int s)
    {
        size = s;
        top = -1;
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
        if(isFull())
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
        if(isEmpty())
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
        for(int i = top; i > -1; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main(){
    stack<int> ob1(5);
    ob1.push(4);
    ob1.push(7);
    ob1.push(10);
    ob1.push(15);
    ob1.push(17);
    cout << "Popped " << ob1.pop() << endl;
    ob1.push(80);
    ob1.display();
    return 0;
}