#include<iostream>
using namespace std;

class array
{
    int n, *arr;
public:
    friend istream &operator>>(istream &in, array &ob);
    friend ostream &operator<<(ostream &out, const array &ob);
};

istream &operator>>(istream &in, array &ob)
{
    cout << "Enter the size of array: ";
    in >> ob.n;
    ob.arr = new int[ob.n];
    cout << "Enter the elements of array:\n";
    for(int i = 0; i < ob.n; i++)
    {
        cout << "arr[" << i << "]: ";
        in >> ob.arr[i];
    }
    return in;
}

ostream &operator<<(ostream &out, const array &ob)
{
    out << "Array: ";
    for(int i = 0; i < ob.n; i++)
    {
        out << ob.arr[i] << " ";
    }
    out << endl;
    return out;
}

int main(){
    array ob;
    cin >> ob;
    cout << ob;
    return 0;
}