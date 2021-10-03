#include<iostream>
#include<string.h>

using namespace std;

class employee
{
    char name[20];
    int id;
protected:
    float salary;
public:
    employee(char *n, int i)
    {
        cout << "employee constructor is called!\n";
        strcpy(name, n);
        id = i;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "Salary: " << salary << endl;
    }

    ~employee()
    {
        cout << "employee destructor is called!\n";
    }
};

class regular : public employee
{
    int da, hra, basicSalary;
public:
    regular(char *n, int i, int bs) : employee(n, i)
    {
        cout << "regular constructor is called!\n";
        basicSalary = bs;
        da = 0.8 * basicSalary;
        hra = 0.5 * basicSalary;
        salary = da + hra + basicSalary;
    }
    ~regular()
    {
        cout << "regular destructor is called!\n";
    }
};

class part_time : public employee
{
    int hours, payHour;
public:
    part_time(char *n, int i, int h, int p) : employee(n, i)
    {
        cout << "part_time constructor is called!\n";
        hours = h;
        payHour = p;
        salary = hours * payHour;
    }
    ~part_time()
    {
        cout << "part_time destructor is called!\n";
    }
};

int main(){
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

    cout << "Showing data of regular employee: \n";
    ob1_26.display();
    cout << "Showing data of regular employee: \n";
    ob2_26.display();
    return 0;
}