#include <iostream>

using namespace std;

int main()
{
//    int a;
//
//    cout<<"Enter a number: "<<endl;
//    cin>>a;
//
//    for(int i=0;i<6;i++)
//    {
//        for(int j=0;j<4;j++)
//        {
//            cout<<a;
//        }
//        cout<<endl;
//    }

    int a;
    cout<<"Enter the number of column:"<<endl;
    cin>>a;
     int b=2*a;
    for(int i=0;i<=a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(j>a-i&&j<a+i)
                cout<<"*";
                else cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
