#include<iostream>
#include<string.h>
using namespace std;

class student_26
{
    char name[20];
    int roll;
    int total_marks;

    public:
        void setData(char *p, int r, int to);
        void display() const
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Roll : "<<roll<<endl;
            cout<<"Total Marks : "<<total_marks<<endl;
        }
};

void student_26 :: setData(char *p, int r, int to)
{
    strcpy(name, p);
    roll = r;
    total_marks = to;
}

int main(){
    student_26 s_26;
    char name_26[20];
    int roll_26;
    int total_26;
    cout<<"Enter the name of the student: ";
    gets(name_26);
    cout << "Enter the roll: ";
    cin >> roll_26;
    cout << "Enter the total: ";
    cin >> total_26;
    s_26.setData(name_26, roll_26, total_26);
    s_26.display();
    return 0;
}