#include<iostream>
#include<fstream>
using namespace std;
class Student{
    char name[20];
    int rollno;
    int semester;
    float cgpa;
    int phno;
    public:
    void getdata(){
        cout<<"Enter name,roll number,semester,cgpa and phone number"<<endl;
        cin>>name>>rollno>>semester>>cgpa>>phno;
    }
    void display(){
        cout<<"Name: "<<name<<endl<<"ROll number: "<<rollno<<endl;
        cout<<"Semester: "<<semester<<endl<<"CGPA: "<<cgpa<<endl;
        cout<<"Phone number: "<<phno<<endl;
    }
};
int main(){
    fstream file;
    file.open("student.dat", ios :: out);
    int n, size;
    Student ob;
    cout << "Enter the number of students: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter the data:\n";
        ob.getdata();
        file.write((char*)&ob, sizeof(ob));
    }
    file.close();

    file.open("student.dat", ios :: in);
    size = sizeof(ob);
    cout << "Output\n";
    for(int i = 1; i <= n; i++)
    {
        file.seekg(-i * size, ios :: end);
        file.read((char*)&ob, size);
        ob.display();
    }
    file.close();
    return 0;
}