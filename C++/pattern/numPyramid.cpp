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
        int n = 0;
        for(int j = 0; j < r - i - 1; j++)
        {
            cout<<" ";
        }
        for(int j = (r - i - 1); j < r; j++)
        {
            cout<<++n;
        }
        for(int j = r; j < r + i; j++)
        {
            cout<<--n;
        }
        cout<<"\n";
    }
    return 0;
}