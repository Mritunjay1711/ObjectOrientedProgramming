#include<iostream>
using namespace std;

int main(){
    int *p = new int(9);
    int *arr = new int[5];
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter the element arr["<< i << "]: ";
        cin >> arr[i];
    }
    for(int i = 0; i < 5; i++)
    {
        cout << "arr["<< i << "] = " << arr[i] << endl;
    }
    cout << *p << endl;
    delete p;
    delete[] arr;  //to delete array
    return 0;
}