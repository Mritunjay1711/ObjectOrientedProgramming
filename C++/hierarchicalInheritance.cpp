#include<iostream>
#include<string.h>
using namespace std;

class person
{
    string name, gender;
    int age;
public:
    void getData(string s1, string s2, int a)
    {
        name = s1;
        gender = s2;
        age = a;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Age: " << age << endl;
    }
};

class employee : public person
{
    string company;
    float salary;
public:
    void getData(string s1, string s2, int a, string c, float f)
    {
        person :: getData(s1, s2, a);
        company = c;
        salary = f;
    }
    
    void display()
    {
        person :: display();
        cout << "Company: " << company << endl;
        cout << "Salary: " << salary << endl;
    }
};

class student : public person
{
    string institute, level;
public:
    void getData(string s1, string s2, int a, string inst, string lev)
    {
        person :: getData(s1, s2, a);
        institute = inst;
        level = lev;
    }

    void display()
    {
        person :: display();
        cout << "Institute: " << institute << endl;
        cout << "Level: " << level << endl;
    }
};

int main(){
    student s;
    employee e;
    string s1, s2, com, inst, lev;
    float f;
    int a;

    cout << "Enter the data for student: \n";
    cout << "Name: ";
    cin >> s1;
    cout << "Gender: ";
    cin >> s2;
    cout << "Age: ";
    cin >> a;
    cout << "Institute: ";
    cin >> inst;
    cout << "Level: ";
    cin >> lev;
    s.getData(s1, s2, a, inst, lev);

    cout << "Enter the data for employee: \n";
    cout << "Name: ";
    cin >> s1;
    cout << "Gender: ";
    cin >> s2;
    cout << "Age: ";
    cin >> a;
    cout << "Company: ";
    cin >> com;
    cout << "Salary: ";
    cin >> f;
    e.getData(s1, s2, a, com, f);

    cout << "Displaying data of student: \n";
    s.display();
    cout << "Displaying data of employe:\n";
    e.display();   
    return 0;
}