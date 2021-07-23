#include<iostream>
using namespace std;

void swapbyreference(int* a, int* b)
{
    int temp;
    temp= *b;
    *b = *a;
    *a= temp;

}

int main(){
    int a=4,b=8;
    cout<<"The number are "<<a<<" and "<<b<<endl;
    swapbyreference(&a,&b);
    cout<<"The numbers after swaping are "<<a<<" and "<<b<<endl;
    return 0;
}