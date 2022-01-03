#include<iostream>
#include<cstring>
using namespace std;

class student
{
    char name[20];
    int roll;
    float cgpa;
public:
    student(){}
    student(const char *n, int r, float f)
    {
        strcpy(name, n);
        roll = r;
        cgpa = f;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main(){
    student *t1, *t2 = NULL;
    try
    {
        t1 = new student[30];
        if(t1 == NULL)
            throw 1;
        else
            cout << "Memory allocated!\n";
    }

    catch(int a)
    {
        cout << "Memory allocation failed!\n";
    }
    return 0;
}