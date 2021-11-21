#include<iostream>
using namespace std;

template<class T, int size>
class Queue
{
    T *arr;
    int front = -1, rear = -1;
public:
    Queue()
    {
        arr = new T[size];
    }
    int isEmpty()
    {
        return rear == -1;
    }
    int isFull()
    {
        return (rear + 1) % size == front;
    }
    void push(T data)
    {
        if(isFull())
            cout << "Queue overflow!\n";
        else if(isEmpty())
        {
            front = rear = 0;
            arr[rear] = data;
            cout << "Pushed " << data << endl;
        }
        else
        {
            rear = (++rear) % size;
            arr[rear] = data;
            cout << "Pushed " << data << endl;
        }
    }
    T pop()
    {
        T val;
        if(isEmpty())
            cout << "Queue underflow!\n";
        else if(front == rear)
        {
            val = arr[front];
            front = rear = -1;
        }
        else
        {
            val = arr[front];
            front = (++front) % size;
        }
        return val;
    }
    void display()
    {
        int i = front;
        while(i != rear)
        {
            cout << arr[i] << " ";
            i = (++i) % size;
        }
        cout << arr[rear] << endl;
    }
};

int main(){
    Queue<int, 5> obj;
    obj.push(4);
    obj.push(5);
    obj.push(6);
    obj.push(7);
    obj.push(8);
    obj.pop();
    obj.pop();
    obj.pop();
    obj.push(10);
    obj.push(9);
    obj.display();
    return 0;
}