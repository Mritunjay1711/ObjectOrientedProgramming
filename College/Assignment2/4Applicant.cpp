#include<iostream>
#include<fstream>
using namespace std;

class student
{
    char Rno[10];
    char name[20];
    int A_score;
public:
    void enroll()
    {
        cout << "Enter the roll: ";
        cin >> Rno;
        cout << "Enter the name: ";
        getchar();
        gets(name);
        cout << "Enter the A_score: ";
        cin >> A_score;
    }
    int ReturnScore()
    {
        return A_score;
    }

    void status()
    {
        cout << "Roll: " << Rno << endl;
        cout << "Name: " << name << endl;
        cout << "Score: " << A_score << endl;
    }
};

void DisplayContent(fstream &file)
{
    file.seekg(0);
    student ob;
    while(file)
    {
        file.read((char*)&ob, sizeof(ob));
        if(ob.ReturnScore() >= 70)
            ob.status();
    }
}

int main(){
     fstream file;
    file.open("3Stud.dat", ios :: in | ios :: out | ios :: trunc);
    student ob;
    int n;
    cout << "Enter the number of data to insert: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter the data for student[" << i << "]: \n";
        ob.enroll();
        file.write((char*)&ob, sizeof(ob));
    }

    DisplayContent(file);
    file.close();
    return 0;
}