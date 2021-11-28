#include<iostream>
using namespace std;

template<class T>
class vector
{
    T *arr;
    int size;
public:
    vector(T *a, int n)
    {
        size = n;
        arr = new T[size];
        for(int i = 0; i < size; i++)
        {
            arr[i] = a[i];
        }
    }
    void modify(T newVal, int index);
    void multiply(int val);
    void display();
};

template<class T>
void vector<T> :: display()
{
    int i  = 0;
    cout << "(";
    for(i = 0; i < size - 1; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << arr[i]<< ")\n";
}

template<class T>
void vector<T> :: modify(T newVal, int index)
{
    if(index > size - 1)
    {
        cout << "Invalid index!\n";
        return;
    }
    arr[index] = newVal;
}

template<class T>
void vector<T> :: multiply(int val)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] *= val;
    }
}

int main(){
    int arr[5];
    cout << "Enter the content of vector: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    vector<int> ob1(arr, 5);
    int a, data, ind;
    do{
        cout << "Enter\n1 to modify\n2 to multiply\n3 to display\n0 to exit\n";
        cin >> a;
        switch(a)
        {
            case 1:
                cout << "Enter the data and index: ";
                cin >> data >> ind;
                ob1.modify(data, ind); 
                break;
            case 2:
                cout << "Enter the value to multiply: ";
                cin >> data;
                ob1.multiply(data);
                break;
            case 3:
                ob1.display();
                break;
            default:
                break;
        }
    }while(a);
    return 0;
}