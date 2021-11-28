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
    void enqueue(T data)
    {
        if(isFull())
            cout << "Queue overflow!\n";
        else if(isEmpty())
        {
            front = rear = 0;
            arr[rear] = data;
            cout << "enqueueed " << data << endl;
        }
        else
        {
            rear = (++rear) % size;
            arr[rear] = data;
            cout << "enqueueed " << data << endl;
        }
    }
    T dequeue()
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
    obj.enqueue(4);
    obj.enqueue(5);
    obj.enqueue(6);
    obj.enqueue(7);
    obj.enqueue(8);
    obj.dequeue();
    obj.dequeue();
    obj.dequeue();
    obj.enqueue(10);
    obj.enqueue(9);
    obj.display();
    return 0;
}