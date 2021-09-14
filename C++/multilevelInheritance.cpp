#include<iostream>
using namespace std;

class person
{
    string name, gender;
    int age;
public:
    void getData(string n, string g, int a)
    {
        name = n;
        gender = g;
        age =a ;
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

class programmer : public employee
{
    int number;
public:
    void getData(string n, string g, int a, string com, float f, int num)
    {
        employee :: getData(n, g, a, com, f);
        number = num;
    }
    void display()
    {
        cout << "Displaying data:\n";
        employee :: display();
        cout << "Number of programming languages known: " << number << endl;
    }
};

int main(){
    programmer ob;
    string n, g, com;
    int a, num;
    float f;


    cout << "Enter the data:\n";
    cout << "Name: ";
    cin >> n;
    cout << "Gender: ";
    cin >> g;
    cout << "Age: ";
    cin >> a;
    cout << "Company: ";
    cin >> com;
    cout << "Salary: ";
    cin >> f;
    cout << "Programming language: ";
    cin >> num;
    ob.getData(n, g, a, com, f, num);
    ob.display();
    return 0;
}