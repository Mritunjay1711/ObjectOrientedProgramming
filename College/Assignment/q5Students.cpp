#include<iostream>
#include<string.h>
using namespace std;

class Student{
    char name[20];
    int roll;
    float marks[5];
    float total_marks;
    float average;
    static float avgClass;
    public:
        void setData(char *p, int r, float arr[])
        {
            float sum = 0;
            strcpy(name, p);
            roll = r;
            for(int i = 0; i < 5; i++)
            {
                marks[i] = arr[i];
                sum += arr[i];
            }
            total_marks = sum;
            average = sum/5;
        }
        void diplay()
        {
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
            cout << "The marks of 5 subjects are: ";
            for(int i = 0; i < 5; i++)
            {
                cout << marks[i] << " ";
            }
            cout << "\nThe average marks of this student is " << average << endl;
        }
        friend void AverageClass(Student *s, int n);
        friend void disAboveAvg(Student *s, int n);
        friend void disBelowAvg(Student *s, int n);
        friend void sortAscend(Student *s, int n);
        friend void showHighest(Student *s, int n);
};

float Student :: avgClass;

void AverageClass(Student *s, int n)
{
    float sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += (s + i)->total_marks;
    }
    Student :: avgClass = sum/n;
    cout << "The average marks scored by class is " << Student :: avgClass << endl;
}

void disAboveAvg(Student *s, int n)
{
    cout << "The students who got more than average marks:\n";
    for(int i = 0; i < n; i++)
    {
        if(s[i].total_marks > Student :: avgClass)
        {
            s[i].diplay();
        }
    }
}

void disBelowAvg(Student *s, int n)
{
    cout << "The students who got less than average marks:\n";
    for(int i = 0; i < n; i++)
    {
        if(s[i].total_marks < Student :: avgClass)
        {
            s[i].diplay();
        }
    }
}

void sortAscend(Student *s, int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(s[j].total_marks > s[j + 1].total_marks)
            {
                Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

void showHighest(Student *s, int n)
{
    cout << "The student who got highest marks is:\n";
    Student temp = s[0];
    for(int i = 1; i < n; i++)
    {
        if(temp.total_marks < s[i].total_marks)
            temp = s[i];
    }
    temp.diplay();
}

int main(){
    int n, roll;
    char name[20];
    float marks[5];
    cout << "Enter the number of students: ";
    cin >> n;
    Student cl[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter the name: ";
        getchar();
        gets(name);
        cout << "Enter the roll: ";
        cin >> roll;
        cout << "Enter the marks of 5 subjects:\n";
        for(int j = 0; j < 5; j++)
        {
            cout << "marks[" << j + 1 << "]: ";
            cin >> marks[j];
        }
        cl[i].setData(name, roll, marks);
    }
    disAboveAvg(cl, n);
    cout << "--------------\n";
    disBelowAvg(cl, n);
    cout << "--------------\n";
    sortAscend(cl, n);
    for(int i = 0; i < n; i++)
    {
        cl[i].diplay();
    }
    cout << "--------------\n";
    showHighest(cl, n);
    return 0;
}