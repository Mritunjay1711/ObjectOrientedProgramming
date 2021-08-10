#include<iostream>
using namespace std;

void swap(int a, int b)
{
    cout << "This is swap by value: " << endl;
    int temp = a;
    a = b;
    b = temp;

    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
}

void swap(int *a, int *b)
{
    cout << "This is swap by address: " << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Pass by reference
// void swap(int &a, int &b)
// {
//     cout << "This is swap by reference: " << endl;
//     int temp = a;
//     a = b;
//     b = temp;
//     cout << "Reference one" << endl;
// }

int main(){
    int a_26 = 10, b_26 = 20;
    swap(a_26, b_26);
    swap(&a_26, &b_26);
    cout << "The value after swapping are a = " << a_26 << " and b = " << b_26 << endl ;
    return 0;
}