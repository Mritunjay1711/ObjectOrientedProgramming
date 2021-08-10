#include<iostream>
using namespace std;

void print()
{
    for(int i_26 = 0; i_26 < 80; i_26++)
    {
        cout << '*';
    }
    cout << "\n";
}

void print(char c_26)
{
    for(int i_26 = 0; i_26 < 80; i_26++)
    {
        cout << c_26;
    }
    cout << "\n";
}

void print(int n_26)
{
    for(int i_26 = 0; i_26 < n_26; i_26++)
    {
        cout << '*';
    }
    cout << "\n";
}

void print(char c_26, int n_26)
{
    for(int i_26 = 0; i_26 < n_26; i_26++)
    {
        cout << c_26;
    }
    cout << "\n";
}

int main(){
    print();
    print('^');
    print(10);
    print('&', 10);
    return 0;
}