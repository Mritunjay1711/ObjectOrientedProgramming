#include<iostream>
#include<string.h>
using namespace std;

class student
{
    char name[20], course[20];
    int roll, age;
public:
    student(char *n, int r, int a, char *c)
    {
        cout << "student constructor is called!\n";
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

    ~student()
    {
        cout << "student destructor is called!\n";
    }
};

class test : public student
{
    int marks[5];
public:
    test(char *n, int r, int a, char *c, int *m): student(n, r, a, c)
    {
        cout << "test constructor is called!\n";
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

    ~test()
    {
        cout << "test destructor is called!\n";
    }
};

int main(){
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
    test ob1_26(n_26, r_26, a_26, c_26, m_26);
    ob1_26.display();
    return 0;
}