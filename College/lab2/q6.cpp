#include <iostream>
#include <string.h>

using namespace std;

class employees_26
{
    int id;
    char name[20];
    int age;
    float basic_salary;
    float gross_salary;

public:
    void setData(int a, char *p, int b, float sal);
    void display() const;
    void calcGS();
};

void employees_26 ::setData(int a, char *p, int b, float sal)
{
    id = a;
    strcpy(name, p);
    age = b;
    basic_salary = sal;
}

void employees_26 ::calcGS()
{
    gross_salary = basic_salary + (0.8 * basic_salary) + (0.1 * basic_salary);
}

void employees_26 ::display() const
{
    cout << "Id: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Basic salary: " << basic_salary << endl;
    cout << "Gross salary: " << gross_salary << endl;
}

int main()
{
    int n_26, id, age;
    char name[20];
    float basicSalary;
    cout << "Enter the number of employees: ";
    cin >> n_26;
    employees_26 e_26[n_26];

    for (int i_26 = 0; i_26 < n_26; i_26++)
    {
        cout << "Enter the details of employee " << i_26 + 1 << endl;
        cout << "Enter the Id: ";
        cin >> id;
        cout << "Enter the name: ";
        getchar();
        gets(name);
        cout << "Enter the age: ";
        cin >> age;
        cout << "Enter the basic salary: ";
        cin >> basicSalary;

        e_26[i_26].setData(id, name, age, basicSalary);
        e_26[i_26].calcGS();
    }

    for (int i_26 = 0; i_26 < n_26; i_26++)
    {
        cout << "Details of employee " << i_26 + 1 << endl;
        e_26[i_26].display();
    }

    return 0;
}