#include<iostream>
using namespace std;

inline int incr(int n_26) {return ++n_26;}

int main(){
    int n_26;
    cout << "Enter the number you want to increment: ";
    cin >> n_26;
    cout << "The number after increment is " << incr(n_26) << endl;
    return 0;
}