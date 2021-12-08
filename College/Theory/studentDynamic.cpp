#include <iostream>
#include <string.h>
using namespace std;

class student
{
    char *name;
    int age;
    int roll;
    float averageMarks;

public:
    student() 
    {
        name = new char[1];
        age = 0;
        roll = 0;
        averageMarks = 0;
    }

    student(char *n, int a, int r, float avg)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        age = a;
        roll = r;
        averageMarks = avg;
    }

    student(const student &ob)
    {
        name = new char[strlen(ob.name) + 1];
        strcpy(name, ob.name);
        age = ob.age;
        roll = ob.roll;
        averageMarks = ob.averageMarks;
    }

    ~student()
    {
        delete[] name;
    }

    student operator=(student ob)
    {
        name = new char[strlen(ob.name) + 1];
        strcpy(name, ob.name);
        age = ob.age;
        roll = ob.roll;
        averageMarks = ob.averageMarks;
        return *this;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll: " << roll << endl;
        cout << "Average marks: " << averageMarks << endl;
        cout << "\n";
    }
    friend void highAverage(student *ob, int n);
};

void highAverage(student *ob, int n)
{
    student temp = ob[0];
    for (int i = 0; i < n; i++)
    {
        if (temp.averageMarks < ob[i].averageMarks)
            temp = ob[i];
    }
    cout << "Highest average scorer is: \n";
    temp.display();
}

int main()
{
    int n;
    char name[30];
    int roll, age;
    float average;

    cout << "Enter the number of students: ";
    cin >> n;
    student ob[10];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the details of the student " << i + 1 << endl;
        cout << "Name: ";
        getchar();
        gets(name);
        cout << "Age: ";
        cin >> age;
        cout << "Roll: ";
        cin >> roll;
        cout << "Average marks: ";
        cin >> average;
        ob[i] = student(name, age, roll, average);
    }

    student ob2(ob[0]);
    ob2.display();
    cout << "\n";

    for(int i = 0; i < n; i++)
    {
        ob[i].display();
    }
    highAverage(ob, n);

    return 0;
}