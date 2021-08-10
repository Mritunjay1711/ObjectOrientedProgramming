#include<iostream>
using namespace std;

void print(char c_26 = '*', int n_26 = 80)
{
    for(int i_26 = 0; i_26 < n_26; i_26++)
    {
        cout << c_26;
    }
    cout << "\n";
}

int main(){
    print();
    print('&');
    print('@', 6);
    return 0;
}