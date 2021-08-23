#include<iostream>
using namespace std;

int product(int a = 1, int b = 1, int c = 1, int d = 1)
{
    return a*b*c*d;
}

int main(){
    cout << "The product of two numbers is " << product(2, 4) << endl;
    cout << "The product of three numbers is " << product(3, 8, 9) << endl;
    cout << "The product of four numbers is " << product(8, 2, 4, 8) << endl;
    return 0;
}