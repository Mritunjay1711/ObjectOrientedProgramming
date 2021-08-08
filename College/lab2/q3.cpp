#include <iostream>
#include <string.h>
using namespace std;

class student_26
{
    char name[50];
    int roll;
    float marks[5];
    float percent;
    float total_marks;

public:
    void setData(char *p, int r, int *mark);
    void display() const;
    void calcPerTotal();
};

void student_26 :: setData(char *p, int r, int *mark)
{
    strcpy(name, p);
    roll = r;
    for(int i = 0; i < 5; i++)
    {
        marks[i] = mark[i];
    }
}
  
void student_26 :: display() const
{
    cout << "Name : " << name << endl;
    cout << "Roll : " << roll << endl;
    for(int i = 0; i < 5; i++)
    {
        cout<< "Marks[" << i + 1 << "] : " << marks[i] <<endl;
    }
    cout << "Total marks : " << total_marks << endl;
    cout << "Percentage : " << percent << endl;
}

void student_26 :: calcPerTotal()
{
    float sum_26 = 0;
    for(int i = 0; i < 5; i++)
    {
        sum_26 += marks[i];
    }
    total_marks = sum_26;
    percent = total_marks/5;
}

int main()
{
    student_26 s_26;
    int roll, marks[5];
    char name[20];
    cout<< "Enter the name: ";
    gets(name);
    cout << "Enter the roll: ";
    cin >> roll;
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter the marks of sub " << i + 1 << " : ";
        cin >> marks[i];
    }

    s_26.setData(name, roll, marks);
    s_26.calcPerTotal();
    s_26.display();
    return 0;
}