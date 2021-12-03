//Insertion after a certain roll number

#include<iostream>
#include<fstream>
using namespace std;

class student
{
public:
    char name[20];
    int roll;
    float cgpa;
public:
    void getData()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the roll: ";
        cin >> roll;
        cout << "Enter the CGPA: ";
        cin >> cgpa;
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
    student ob[4], ob1;
    student ob2[5];
    file.open("Insertion.txt", ios :: out | ios :: in | ios :: trunc);
    for(int i = 0; i < 2; i++)
    {
        cout << "Enter the data for student: " << i + 1 << endl;
        ob[i].getData();
        file.write((char*)&ob[i], sizeof(ob[i]));
    }
    file.seekg(0);
    fstream file2;
    file2.open("copying.txt", ios :: out);


    cout << "Enter the data to insert: ";
    ob1.getData();

    for(int i = 0; i < 2; i++)
    {
        file.read((char*)&ob[i], sizeof(ob[i]));
        file2.write((char*)&ob[i], sizeof(ob[i]));
        if(ob[i].roll == 243)
        {
            file2.write((char*)&ob1, sizeof(ob1));
        }
    }

    // remove("Insertion.txt");
    // rename("copying.txt", "Insertion2.txt");
    file2.close();
    file2.open("copying.txt", ios :: in);
    file2.seekp(0);

    cout << "Output:\n";
    for(int i = 0; i < 3; i++)
    {
        file2.read((char*)&ob2[i], sizeof(ob2[i]));
        ob2[i].display();
        cout << endl;
    }
    file.close();
    file2.close();
    return 0;
}