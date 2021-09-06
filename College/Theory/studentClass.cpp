#include<iostream>
#include<string.h>
using namespace std;

class student{
    char name[20];
    int age;
    int roll;
    float average_marks;
public: 
    student(){}
    student(char *n, int a, int r, float avg)
    {
        strcpy(name, n);
        age = a;
        roll = r;
        average_marks = avg;
    }
    
    student(const student &ob)
    {
        strcpy(name, ob.name);
        age = ob.age;
        roll = ob.roll;
        average_marks = ob.average_marks;
    }

    ~student(){}

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll: " << roll << endl;
        cout << "Average marks: " << average_marks << endl;
        cout << "\n";
    }
    friend void highAverage(student ob1, student ob2);
};

void highAverage(student ob1, student ob2)
{
    cout << "Highest average scorer is\n";
    if(ob1.average_marks > ob2.average_marks)
        ob1.display();
    else
        ob2.display();
}

int main(){
    char name[20];
    int roll, age;
    float avg_marks;

    cout << "Enter the details of the first student:\n";
    cout << "Name: ";
    gets(name);
    cout << "Age: ";  
    cin >> age;
    cout << "Roll: ";
    cin >> roll;
    cout << "Average marks: ";
    cin >> avg_marks;
    student s1(name, age, roll, avg_marks);
    student s2(s1);


    cout << "Enter the details of the second student:\n";
    cout << "Name: ";
    getchar();
    gets(name);
    cout << "Age: ";
    cin >> age;
    cout << "Roll: ";
    cin >> roll;
    cout << "Average marks: ";
    cin >> avg_marks;
    student s3(name, age, roll, avg_marks);

    s1.display();
    s2.display();
    s3.display();
    highAverage(s1, s3);
    return 0;
}