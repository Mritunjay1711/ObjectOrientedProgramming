#include<iostream>
using namespace std;

//Base class
class employee
{
    float salary;
    public:
    int id;
        employee()
        {
            id = 1;
            salary = 34.0;
        }
        employee(int i)
        {
            id = i;
            salary = 34.0;
        }

        void display()
        {
            cout << "Id: " << id << endl;
            cout << "Salary: " << salary << endl;
        }
};

//Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
NOTE:
-> Default visibility mode is private
-> Private visibility mode: Public members of the base class becomes private members of the derived class
-> Public visibility mode: Public members fo the base class becomes public members of the derived class
-> Private members of base class cannot be inherited 
*/

//Creating a programmer class derived from employee Base class

class programmer : employee{
public:
    int languageCode = 9;
    programmer(int inpid)
    {
        id = inpid;
    }
    void getData()
    {
        cout << "Id: " << id << endl;
    }
};

int main(){
    employee mj(2), adarsh(5);
    mj.display();
    adarsh.display();
    programmer skillf(10);
    cout << skillf.languageCode << endl;
    skillf.getData();
    return 0;
}