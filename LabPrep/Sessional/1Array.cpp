#include<iostream>
using namespace std;

int main(){
    int n, *arr, *arr2, count = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    arr = new int[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter the element " << i << ": ";
        cin >> arr[i];
        if(arr[i] % 10 == 0)
            count++; 
    }

    arr2 = new int[count];
    int k = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 10 == 0)
            arr2[k++] = arr[i];
    }

    for(int i = 0; i < k; i++)
    {
        cout << arr2[i] << " ";
    }
    if(!count)
        cout << "No element divisible by 10\n";
    delete[] arr2;
    delete[] arr;
    return 0;
}