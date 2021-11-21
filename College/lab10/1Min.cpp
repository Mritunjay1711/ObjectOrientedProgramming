#include<iostream>
using namespace std;

template<class T>
class Array
{
    T *arr;
    int size;
public:
    Array(T *a, int s)
    {
        size = s;
        arr = new T[s];
        for(int i = 0; i < size; i++)
        {
            arr[i] = a[i];
        }
    }
    T get_min()
    {
        T min = arr[0];
        for(int i = 1; i < size; i++)
        {
            if(min > arr[i])
                min = arr[i];
        }
        return min;
    }
    void display()
    {
        for(int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    int int_arr[5];
    cout << "Enter integer array: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> int_arr[i];
    }
    Array<int> ob1(int_arr, 5);

    float f_arr[5];
    cout << "Enter floating array: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> f_arr[i];
    }
    Array<float> ob2(f_arr, 5);

    cout << "Minimum in integer array: " << ob1.get_min() << endl;
    cout << "Minimum in floating array: " << ob2.get_min() << endl;
    return 0;
}