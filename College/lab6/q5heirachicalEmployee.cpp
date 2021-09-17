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
    void getData(char *n, int i)
    {
        strcpy(name, n);
        id = i;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

class regular : public employee
{
    int da, hra, basicSalary;
public:
    void getData(char *n, int i, int bs)
    {
        employee :: getData(n, i);
        basicSalary = bs;
        da = 0.8 * basicSalary;
        hra = 0.5 * basicSalary;
        salary = da + hra + basicSalary;
    }
};

class part_time : public employee
{
    int hours, payHour;
public:
    void getData(char *n, int i, int h, int p)
    {
        employee :: getData(n, i);
        hours = h;
        payHour = p;
        salary = hours * payHour;
    }
};

int main(){
    regular ob1_26;
    part_time ob2_26;
    char name_26[20];
    int a_26, b_26, c_26, i_26;

    cout << "Enter the details of regular employee:\n";
    cout << "Name: ";
    gets(name_26);
    cout << "Id: ";
    cin >> i_26;
    cout << "Basic salary: ";
    cin >> a_26;
    ob1_26.getData(name_26, i_26, a_26);

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
    ob2_26.getData(name_26, i_26, b_26, c_26);

    cout << "Showing data of regular employee: \n";
    ob1_26.display();
    cout << "Showing data of regular employee: \n";
    ob2_26.display();
    return 0;
}