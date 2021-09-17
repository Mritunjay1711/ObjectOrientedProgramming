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
    test ob1_26;
    char n_26[30], c_26[30];
    int r_26, a_26, m_26[5];

    cout << "Enter the data: \n";
    cout << "Name: ";
    gets(n_26);
    cout << "Roll: ";
    cin >> r_26;
    cout << "Age: ";
    cin >> a_26;
    cout << "Course: ";
    getchar();
    gets(c_26);
    cout << "Enter the marks for 5 subjects: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> m_26[i];
    }
    ob1_26.getData(n_26, r_26, a_26, c_26, m_26);
    ob1_26.display();
    return 0;
}