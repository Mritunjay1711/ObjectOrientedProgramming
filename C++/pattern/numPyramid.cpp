// For row = 4;
//    1     
//   121
//  12321
// 1234321

#include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;
    
    for(int i = 0; i < r; i++)
    {
        int n = 1;
        for(int j = 0; j < r - i - 1; j++)
        {
            cout<<" ";
        }
        for(int j = (r - i - 1); j < r; j++, n++)
        {
            cout<<n;
        }
        for(int j = r; j < r + i; j++, n--)
        {
            cout<<n - 2;
        }
        cout<<"\n";
    }
    return 0;
}