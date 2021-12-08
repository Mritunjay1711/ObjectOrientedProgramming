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
    student ob[3], ob1, ob2;
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
    int flag = 0;
    for(int i = 0; i < 2; i++)
    {
        file.read((char*)&ob[i], sizeof(ob[i]));
        file2.write((char*)&ob[i], sizeof(ob[i]));
        if(ob[i].roll == 243)
        {
            file2.write((char*)&ob1, sizeof(ob1));
            flag = 1;
        }
    }
    if(!flag)
        cout << "Roll not found!\n";

    file.close();
    file2.close();
    remove("Insertion.txt");
    rename("copying.txt", "Insertion.txt");
    file2.open("Insertion.txt", ios :: in);
    file2.seekp(0);

    cout << "Output:\n";
    while(file2)
    {
        file2.read((char*)&ob2, sizeof(ob2));
        ob2.display();
        cout << endl;
    }
    file2.close();
    return 0;
}