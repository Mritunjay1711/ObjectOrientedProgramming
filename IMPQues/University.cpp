#include<iostream>
#include<cstring>
using namespace std;

class Staff
{
    int staffCode;
    char name[20];
public:
    Staff(int a, const char *n = "other")
    {
        strcpy(name, n);
        staffCode = a;
    }
    void staffDisplay()
    {
        cout << "Name: " << name << endl;
        cout << "Staff code: " << staffCode << endl;
    }
};

class Administration : public Staff
{
public:
    Administration(int a, char *n) : Staff(a, n){}
};

class faculty : public Staff
{
    char subject[20];
    bool phdDegree;
public:
    faculty(int a, char *n, char *sub, bool d) : Staff(a, n)
    {
        strcpy(subject, sub);
        phdDegree = d;
    }
    void printDetails()
    {
        staffDisplay();
        cout << "Subject: " << subject << endl;
        cout << "Phd Degree: ";
        if(phdDegree)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
};


class AssitantManager : public Administration
{
    char department[30];
public:
    AssitantManager(int a, char *n, const char *d = "Undeclared"): Administration(a, n)
    {
        strcpy(department, d);
    }
    void displayManager()
    {
        staffDisplay();
        cout << "Department: " << department << endl;
    }
};

int main(){
    faculty fac1(211192, "Rohit", "Maths", 1);
    AssitantManager man1(99999, "Raju", "SCE");
    fac1.printDetails();
    man1.displayManager();
    return 0;
}