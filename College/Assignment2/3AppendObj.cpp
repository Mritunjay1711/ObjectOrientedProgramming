#include<iostream>
#include<fstream>
using namespace std;

class STUD
{
    int Rno;
    char Name[20];
public:
    void Enter()
    {
        cout << "Enter the roll: ";
        cin >> Rno;
        cout << "Enter the name: ";
        getchar();
        gets(Name);
    }
    void Display()
    {
        cout << "Roll: " << Rno << endl;
        cout << "Name: " << Name << endl;
    }
};

void addBottom()
{
    STUD ob;
    fstream file2;
    file2.open("3Stud.dat", ios :: app);
    cout << "Enter the details of student to add in bottom:\n";
    ob.Enter();
    // cout << file2.tellg() << endl;
    file2.write((char*)&ob, sizeof(ob));
    file2.close();
}

int main(){
    fstream file;
    file.open("3Stud.dat", ios :: out);
    STUD ob[4];
    for(int i = 0; i < 3; i++)
    {
        cout << "Enter the data for student " << i + 1 << endl;
        ob[i].Enter();
        file.write((char*)&ob[i], sizeof(ob[i]));
    }
    file.close();
    addBottom();
    
    file.open("3Stud.dat", ios :: in);
    for(int i = 0; i < 4; i++)
    {
        file.read((char*)&ob[i], sizeof(ob[i]));
        ob[i].Display();
    }
    file.close();  
    return 0;
}