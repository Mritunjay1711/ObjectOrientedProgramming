#include<iostream>
using namespace std;

class Array
{
    int *arr, n;
public:
    Array(){}
    Array(int *ar, int a)
    {
        n = a;
        arr = new int[n];
        for(int i = 0; i < n; i++)
        {
            arr[i] = ar[i];
        }
    }
    Array(const Array &ob)
    {
        n = ob.n;
        arr = new int[n];
        for(int i = 0; i < n; i++)
        {
            arr[i] = ob.arr[i];
        }
    }
    friend Array operator++(Array&, int);
    void operator-()
    {
        for(int i = 0; i < n; i++)
        {
            arr[i] *= -1;
        }
    }
    friend Array operator+(int, Array);

    void display()
    {
        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

Array operator++(Array &ob, int)
{
    Array temp;
    temp.n = ob.n;
    temp.arr = new int[temp.n];
    for(int i = 0; i < ob.n; i++)
    {
        temp.arr[i] = ob.arr[i]++;
    }
    return temp;
}

Array operator+(int a, Array ob)
{
    for(int i = 0; i < ob.n; i++)
    {
        ob.arr[i] += a;
    }
    return ob;
}

int main(){
    int arr[] = {4, 2, 9, 4, 6};
    Array ob(arr, 5), ob3;
    ob3 = ob++;
    ob3.display();
    ob.display();
    ob3 = 6 + ob;
    ob3.display();
    -ob;
    ob.display();
    return 0;
}