#include<iostream>
#include<fstream>
using namespace std;

class student
{
    int addno;
    char name[40];
    float totalMarks;
public:
    void getinfo()
    {
        cout << "Enter the Admission Number: ";
        cin >> addno;
        cout << "Enter the name: ";
        getchar();
        gets(name);
        cout << "Enter the totalmarks: ";
        cin >> totalMarks;
    }
    void showinfo()
    {
        cout << "Admission Number: " << addno << endl;
        cout << "Name: " << name << endl;
        cout << "Total marks: " << totalMarks << endl;
    }
    float rettotmarks()
    {
        return totalMarks;
    }
};



void writeInFile(fstream &file)
{
    student ob;
    ob.getinfo();
    file.write((char*)&ob, sizeof(ob));
}

void Display(fstream &file)
{
    file.seekg(0);
    student ob;
    cout << "Showing details of student who scored between 456 and 498\n";
    while(file)
    {
        file.read((char*)&ob, sizeof(ob));
        if(ob.rettotmarks() >= 456 && ob.rettotmarks() <= 498)
            ob.showinfo();
    }
    cout << "Working\n";
}

int main(){
    int n;
    cout << "Enter the number of data you want to enter: ";
    cin >> n;

    fstream file;
    file.open("2Student.dat", ios :: in | ios :: out | ios :: trunc);
    for(int i = 0; i < n; i++)
    {
        writeInFile(file);
    }

    Display(file);
    file.close();
    return 0;
}