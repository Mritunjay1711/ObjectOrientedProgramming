#include<iostream>
using namespace std;

int main(){
    int a[10], e = 0, o = 0;
    cout << "Enter the elements of array\n";
    for(int i = 0; i < 10; i++)
    {
       cin >> a[i];
       if(a[i] % 2 == 0)
            e++;
       else
            o++;
    }
    // Dynamic memory allocation
    int *even = new int[e];
    int *odd = new int[o];
    // variable to access new arrays
    int x = 0, y = 0;
    for(int i = 0; i < 10; i++)
    {
        if(a[i] % 2 == 0)
        {
            even[x++] = a[i];
        }
        else
            odd[y++] = a[i];
    }
    
    cout << "Odd numbers: ";
    for(int i = 0; i < o; i++)
        cout << odd[i] << " ";
    
    cout << "Even numbers: ";
    for(int i = 0; i < e; i++)
        cout << even[i] << " ";

    delete[] odd;
    delete[] even;
    return 0;
}