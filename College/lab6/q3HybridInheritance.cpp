#include<iostream>
#include<string.h>
using namespace std;

class student
{
    char name[20];
    int roll, age;
public:
    void getStudData(char *n, int r, int a)
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

class test : virtual public student
{
    int marks[3];
public:
    void getTestData(int *m)
    {
        for(int i = 0; i < 3; i++)
        {
            marks[i] = m[i];
        }
    }

    int total_marks()
    {
        return marks[0] + marks[1] + marks[2];
    }
};

class activities : virtual public student
{
    int act_mark[2];
public:
    void setActData(int *m)
    {
        act_mark[0] = m[0];
        act_mark[1] = m[1];
    }

    int total_score()
    {
        return act_mark[0] + act_mark[1];
    }
};

class result : public test, public activities
{
    int total;
    float percent;
    char grade;
public:
    void showTotal()
    {
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
};

int main(){
    result ob1_26;
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
    ob1_26.getStudData(n_26, r_26, a_26);
    ob1_26.getTestData(m_26);
    ob1_26.setActData(act_26);
    ob1_26.showTotal();
    ob1_26.display();
    return 0;
}