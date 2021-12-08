#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cout << "Enter the integer: ";
    cin >> n;
    cout << setw(10) << left << dec << n;
    cout << setw(10) << left << hex << n;
    cout << setw(10) << left << oct << n;
    return 0;
}