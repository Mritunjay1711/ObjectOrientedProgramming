#include <iostream>
using namespace std;

class myArr
{
    int *arr;
    int len;

public:
    myArr()
    {
        arr = new int[1];
        len = 0;
    }

    myArr(int *array, int n)
    {
        len = n;
        arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = array[i];
        }
    }

    myArr(const myArr &o)
    {
        len = o.len;
        arr = new int[len];
        for (int i = 0; i < len; i++)
        {
            arr[i] = o.arr[i]; 
        }
    }

    ~myArr(){
        delete[] arr;
    }

    void concatArray(myArr o1, myArr o2);

    void display()
    {
        for (int i = 0; i < len; i++)
        {
            cout << " " << arr[i];
        }
        cout << "\n";
    }
};

void myArr ::concatArray(myArr o1, myArr o2)
{
    len = o1.len + o2.len;
    delete[] arr;
    arr = new int[len];
    int i = 0;
    for (i = 0; i < o1.len; i++)
    {
        arr[i] = o1.arr[i];
        if(i < o2.len)
        {
            arr[i + o1.len] = o2.arr[i];
        }
    }
}

int main()
{
    int arr_26[30], n_26;
    cout << "Enter the number of elements of array 1: ";
    cin >> n_26;
    cout << "Enter the elements: ";
    for(int i_26 = 0; i_26 < n_26; i_26++)
    {
        cin >> arr_26[i_26];
    }
    myArr a1_26(arr_26, n_26);

    cout << "Enter the number of elements of array 2: ";
    cin >> n_26;
    cout << "Enter the elements: ";
    for(int i_26 = 0; i_26 < n_26; i_26++)
    {
        cin >> arr_26[i_26];
    }
    myArr a2_26(arr_26, n_26);
    myArr a3_26;
    a3_26.concatArray(a1_26, a2_26);
    
    a1_26.display();
    a2_26.display();
    a3_26.display();

    return 0;
}