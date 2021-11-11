#include<iostream>
#include<iostream>
#include<string.h>
using namespace std;

class student
{
    char name[20];
    int roll, age;
public:
    student(char *n, int r, int a)
    {
        cout << "student constructor is called!\n";
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

    ~student()
    {
        cout << "student destructor is called!\n";
    }
};

class test : virtual public student
{
    int marks[3];
public:
    test(char *n, int r, int a, int *m) : student(n, r, a)
    {
        cout << "test constructor is called!\n";
        for(int i = 0; i < 3; i++)
        {
            marks[i] = m[i];
        }
    }

    int total_marks()
    {
        return marks[0] + marks[1] + marks[2];
    }
    
    ~test()
    {
        cout << "test destructor is called!\n";
    }
};

class activities : virtual public student
{
    int act_mark[2];
public:
    activities(char *n, int r, int a, int *am) : student(n, r, a)
    {
        cout << "activities constructor is called!\n";
        act_mark[0] = am[0];
        act_mark[1] = am[1];
    }

    int total_score()
    {
        return act_mark[0] + act_mark[1];
    }

    ~activities()
    {
        cout << "activities destructor is called!\n";
    }
};

class result : public test, public activities // This matters for calling constructors
{
    int total;
    float percent;
    char grade;
public:
    result(char *n, int r, int a, int *m, int *am) : student(n, r, a), activities(n, r, a, am), test(n, r, a, m) 
    {
        cout << "result constructor is called!\n";
        
        total = total_marks() + total_score();
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

    ~result()
    {
        cout << "result destructor is called!\n";
    }
};

int main(){

    char n_26[20];
    int r_26, a_26, m_26[3], act_26[2];

    cout << "Enter the data: \n";
    cout << "Name: ";
    gets(n_26);
    cout << "Roll: ";
    cin >> r_26;
    cout << "Age: ";
    cin >> a_26;
    cout << "Enter the marks for 3 subjects: ";
    for(int i = 0; i < 3; i++)
    {
        cin >> m_26[i];
    }
    cout << "Enter the 2 activity marks: ";
    cin >> act_26[0] >> act_26[1];
    result ob1_26(n_26, r_26, a_26, m_26, act_26);
    ob1_26.display();
    return 0;
}