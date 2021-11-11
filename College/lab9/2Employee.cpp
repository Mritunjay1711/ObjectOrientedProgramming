#include<iostream>
#include<string.h>

using namespace std;

class employee
{
protected:
    char name[20];
    int id;
    float salary;
public:
    employee(char *n, int i)
    {
        strcpy(name, n);
        id = i;
    }
    virtual void calcSalary(){}    
    virtual void display()
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
    ~employee(){}
};

class regular : public employee
{
    int da, hra, basicSalary;
public:
    regular(char *n, int i, int bs) : employee(n, i)
    {
        basicSalary = bs;
        da = 0.8 * basicSalary;
        hra = 0.5 * basicSalary;
        salary = da + hra + basicSalary;
    }
    void calcSalary()
    {
        da = 0.8 * basicSalary;
        hra = 0.5 * basicSalary;
        salary = da + hra + basicSalary;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
    ~regular(){}
};

class part_time : public employee
{
    int hours, payHour;
public:
    part_time(char *n, int i, int h, int p) : employee(n, i)
    {
        hours = h;
        payHour = p;
        salary = hours * payHour;
    }
    void calcSalary()
    {
        salary = hours * payHour;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
    ~part_time(){}
};

int main(){
    employee *bptr;
    char name_26[20];
    int a_26, b_26, c_26, i_26;

    cout << "Enter the details of regular employee:\n";
    cout << "Name: ";
    gets(name_26);
    cout << "Id: ";
    cin >> i_26;
    cout << "Basic salary: ";
    cin >> a_26;
    regular ob1_26(name_26, i_26, a_26);
    bptr = &ob1_26;
    bptr->calcSalary();
    cout << "Showing data of regular employee: \n";
    bptr->display();



    cout << "Enter the details of part-time employee:\n";
    cout << "Name: ";
    getchar();
    gets(name_26);
    cout << "Id: ";
    cin >> i_26;
    cout << "Hours: ";
    cin >> b_26;
    cout << "Pay-per-hour: ";
    cin >> c_26;
    part_time ob2_26(name_26, i_26, b_26, c_26);
    bptr->calcSalary();
    cout << "Showing data of regular employee: \n";
    bptr->display();
    return 0;
}