#include <iostream>

using namespace std;

int main()
{
    int marks[4];
    int i =0;
    cout<<"Enter the marks"<<endl;
    while(i<4)
    {
        cin>>marks[i];
        i++;
    }
    i=0;
    while(i<4)
    {
        cout<<"The marks"<<i<<" is "<<marks[i]<<endl;
        i++;
    }


    return 0;
}
