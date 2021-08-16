#include<iostream>
using namespace std;

int a_26 = 20;

int main(){
    int a_26 = 10;
    cout << "Value of local a_26 is " << a_26 << endl;    
    cout << "Value of global a_26 is " << ::a_26 << endl;    
    return 0;
}