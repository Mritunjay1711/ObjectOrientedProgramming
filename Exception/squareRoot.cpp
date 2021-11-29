#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    try
    {
        if(num >= 0)
        {
            float result = sqrt(num);
            cout << "Result: " << result << endl;
        }
        else
            throw(num);
    }
    catch(int num)
    {
        cout << "Number is negative\n";
    }
    cout << "Exiting main\n";
    return 0;
}