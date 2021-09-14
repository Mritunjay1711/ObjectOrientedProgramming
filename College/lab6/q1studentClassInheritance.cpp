#include<iostream>
#include<string.h>
using namespace std;

class student
{
    char name[20], course[20];
    int roll, age;
public:
    void getData(char *n, int r, int a, char *c)
    {
        strcpy(name, n);
        roll = r;
        age = a;
        strcpy(course, c);
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

class test : public student
{
    int marks[5];
public:
    void getData(char *n, int r, int a, char *c, int *m)
    {
        student :: getData(n, r, a, c);
        for(int i = 0; i < 5; i++)
        {
            marks[i] = m[i];
        }
    }

    void display()
    {
        student :: display();
        cout << "Marks in 5 subjects are\n";
        for(int i = 0; i < 5; i++)
        {
            cout << "Marks[" << i << "]: " << marks[i] << endl;
        }
    }
};

int main(){
    test ob1;
    char n[30], c[30];
    int r, a, m[5];

    cout << "Enter the data: \n";
    cout << "Name: ";
    gets(n);
    cout << "Roll: ";
    cin >> r;
    cout << "Age: ";
    cin >> a;
    cout << "Course: ";
    getchar();
    gets(c);
    cout << "Enter the marks for 5 subjects: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> m[i];
    }
    ob1.getData(n, r, a, c, m);
    ob1.display();
    return 0;
}