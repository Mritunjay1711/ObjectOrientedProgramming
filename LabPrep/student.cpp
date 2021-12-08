#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class student
{
    char name[30];
    int roll;
    float cgpa;
public:
    void getData()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the roll: ";
        cin >> roll;
        cout << "Enter the cgpa: ";
        cin >> cgpa;
    }

    int getRoll()
    {
        return roll;
    }

    void changeCgpa(float f)
    {
        cgpa = f;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main(){
    fstream file;
    file.open("Student.dat", ios :: out);
    int n, roll;
    cout << "Enter the number of students: ";
    cin >> n;
    student ob[n], ob2[n];
    for(int i = 0; i < n; i++)
    {
        ob[i].getData();
        file.write((char*)&ob[i], sizeof(ob[i]));
    }
    file.close();
    file.open("Student.dat", ios :: in | ios :: out | ios :: ate);
    float cgpa;
    
    file.clear();
    file.seekg(0, ios :: beg);
    cout << file.tellg() << endl;
    cout << "Enter the roll to change cgpa: ";
    cin >> roll;
    cout << "Enter the CGPA: ";
    cin >> cgpa;
    for(int i = 0; i < n; i++)
    {
        cout << file.tellg() << endl;
        file.read((char*)&ob[i], sizeof(ob[i]));
        if(ob[i].getRoll() == roll)
        {
            ob[i].changeCgpa(cgpa);
            cout << file.tellg() << "if" << endl;
            int l = -1 * sizeof(student);
            file.seekg( l, ios :: cur);
            cout << file.tellg() << endl;
            file.write((char*)&ob[i], sizeof(student)) << flush;
        }
    }
    file.close();
    file.open("Student.dat", ios :: in);
    cout << file.tellg() << endl;
    for(int i = 0; i < n; i++)
    {
        file.seekg((n - i - 1) * sizeof(student));
        file.read((char*)&ob2[i], sizeof(ob2[i]));
        ob2[i].display();
    }
    file.close();
    return 0;
}