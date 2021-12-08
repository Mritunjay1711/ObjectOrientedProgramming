#include<iostream>
using namespace std;

class Array
{
    int *arr, n;
public:
    Array(){n = 1; arr = new int[n]; arr[0] = -1;}
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
    Array operator+(Array ob1)
    {
        Array temp;
        if(n != ob1.n)
        {
            cout << "Array length doesnot match!";
            return temp;
        }
        else
        {
            temp.n = n;
            temp.arr = new int[n];
            for(int i = 0; i < n; i++)
            {
                temp.arr[i] = arr[i] - ob1.arr[i];
            }
            return temp;
        }
    }
    Array operator=(Array ob)
    {
        n = ob.n;
        arr = new int[n];
        for(int i = 0; i < n; i++)
        {
            arr[i] = ob.arr[i];
        }
        return *this;
    }
    friend Array operator++(Array &ob);
    void display()
    {
        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

Array operator++(Array &ob)
{
    for(int i = 0; i < ob.n; i++)
    {
        ++ob.arr[i];
    }
    return ob;
}

int main(){
    int arr1[] = {8, 6, 9, 1, 2};
    int arr2[] = {4, 2, 9, 4, 6};
    Array ob1(arr1, 5), ob2(arr2, 5), ob3, ob4, ob5, ob6;
    ob3 = ob1+ob2;
    ob3.display();
    ob4 = ob1;
    ob4.display();
    ob5 = ob2;
    ob6 = ++ob5;
    ob5.display();
    ob6.display();
    return 0;
}