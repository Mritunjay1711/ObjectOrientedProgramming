#include<iostream>
#include<string.h>
using namespace std;

class student
{
    char name[20];
    int roll, age;
public:
    void getData(char *n, int r, int a)
    {
        strcpy(name, n);
        roll = r;
        age = a;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Age: " << age << endl;
    }
};

class test : public student
{
    int marks[5];
public:
    void getData(char *n, int r, int a, int *m)
    {
        student :: getData(n, r, a);
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

class result : public test
{
    int total;
    float percent;
    char grade;
public:
    void getData(char *n, int r, int a, int *m)
    {
        test :: getData(n, r, a, m);
        total = 0;
        for(int i = 0; i < 5; i++)
        {
            total += m[i];
        }
        percent = total/5.0;

        int p = percent/10;
        switch (p)
        {
        case 10:

        case 9:
            grade = 'O';
            break;
        case 8:
            grade = 'E';
            break;
        case 7:
            grade = 'A';
            break;
        case 6:
            grade = 'B';
            break;
        case 5:
            grade = 'C';
            break;
        case 4:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
        }
    }

    void display()
    {
        test :: display();
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percent << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main(){
    result ob1_26;
    char n_26[20];
    int r_26, a_26, m_26[5];

    cout << "Enter the data: \n";
    cout << "Name: ";
    gets(n_26);
    cout << "Roll: ";
    cin >> r_26;
    cout << "Age: ";
    cin >> a_26;
    cout << "Enter the marks for 5 subjects: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> m_26[i];
    }
    ob1_26.getData(n_26, r_26, a_26, m_26);
    ob1_26.display();
    return 0;
}