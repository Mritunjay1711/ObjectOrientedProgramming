#include<iostream>
using namespace std;

inline int square(int n) {return n * n;}

inline int cube(int n) {return n * n * n;}

int main(){
    int num_26;
    cout << "Enter the value to find square and cube: ";
    cin >> num_26;
    cout << "The square of the num_26ber is " << square(num_26) << endl;
    cout << "The cube of the num_26ber is " << cube(num_26) << endl;
    return 0;
}