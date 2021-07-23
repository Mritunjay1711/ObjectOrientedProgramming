#include<iostream>
using namespace std;

int main(){
    int a,rev=0,remainder;
    cout<<"Enter the number you want to reverse ";
    cin>>a;

    while(a!=0)
    {
        remainder=a%10;
        rev=rev*10+remainder;
        a/=10;
    }
    cout<<"The reversed number is "<<rev<<endl;

    
    return 0;
}