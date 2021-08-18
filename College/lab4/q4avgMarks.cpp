#include<iostream>
#include<string.h>
using namespace std;

class Student{
    char name[20];
    int roll;
    float total_marks;
    static float avg;
    public:
        friend float Average(Student *s, int n);
        void setData(char *p, int r, float tot)
        {
            strcpy(name, p);
            roll = r;
            total_marks = tot;
        }
        
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
            cout << "Total marks: " << total_marks << endl;
        }
        
};

float Student :: avg;

float Average(Student *s, int n){
    float t = 0;
    for(int i = 0; i < n; i++)
        t += s[i].total_marks;
    
    Student::avg = t/n;
    return Student :: avg;
}


int main(){
    int n, roll;
    char name[20];
    float marks; 
    cout << "Enter the number of students: ";
    cin >> n;
    Student ob[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter the name: ";
        getchar();
        gets(name);
        cout << "Enter the roll: ";
        cin >> roll;
        cout << "Enter the total marks scored: ";
        cin >> marks;
        ob[i].setData(name, roll, marks);
    }

    cout << "The average marks scored by students is " << Average(ob, n) << endl;
    return 0;
}