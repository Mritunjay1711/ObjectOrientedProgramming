#include<iostream>
using namespace std;

typedef struct employee{
    int eId;
    char favChar;
    float salary;
}ep; // This gives short name to structure


int main(){
    struct employee mj;
    ep harry;
    harry.eId = 2;
    harry.favChar = 'c';
    harry.salary = 234;

    mj.eId = 1;
    mj.favChar = 'm';
    mj.salary = 10000;
    cout<<"The value is "<<mj.eId<<endl;
    cout<<"The value is "<<mj.favChar<<endl;  
    cout<<"The value is "<<mj.salary<<endl;

    cout<<"The value is "<<harry.eId<<endl;
    cout<<"The value is "<<harry.favChar<<endl;  
    cout<<"The value is "<<harry.salary<<endl;    
    return 0;
}