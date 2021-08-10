#include<iostream>
using namespace std;

int sum(int a_26, int b_26 = 10, int c_26 = 20)
{
    return (a_26 +  b_26 + c_26);
}

int main(){
    cout << "Result after passing one argument: " << sum(5) << endl;
    cout << "Result after passing two arguments: " << sum(5, 15) << endl;
    cout << "Result after passing three arguments: " << sum(5, 15, 25) << endl;
    return 0;
}