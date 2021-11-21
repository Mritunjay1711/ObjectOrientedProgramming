#include<iostream>
using namespace std;

template<class T>
int Search(T a[], int size, T key)
{
    int ind = -1;
    for(int i = 0; i < size; i++)
    {
        if(a[i] == key)
        {
            ind = i;
            break;
        }
    }
    if(ind == -1)
        cout << "Element not found!\n";
    return ind;
}

int main(){
    int arr[5] = {3, 94, 12, 34, 92};
    char Carr[5] = {'e', 'k', 'm', 'j', 'w'};
    float Farr[5] = {43.5, 13.9, 28.12, 98.12, 22.5};
    cout << "Element is at index: " << Search(arr, 5, 12) << endl;
    cout << "Element is at index: " << Search(Carr, 5, 'j') << endl;
    cout << "Element is at index: " << Search(Farr, 5, 13.9f) << endl;
    return 0;
}