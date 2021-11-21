#include<iostream>
using namespace std;

template<class T, int size>
void sort(T arr[])
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

int main(){
    int arr[5] = {10, 9, 8, 7, 6};
    sort<int, 5>(arr);
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}