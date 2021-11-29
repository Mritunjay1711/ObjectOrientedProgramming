#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file;
    file.open("7student.txt", ios :: in | ios :: out | ios :: trunc);
    char name[20], gender[10];
    int phy, chem, math;

    if(!file)
    {
        cout << "File doesnot exist!\n";
        exit(1);
    }

    cout << "Enter the name: ";
    cin >> name;
    file << name << endl;
    cout << "Enter the gender: ";
    cin >> gender;
    file << gender << endl;
    cout << "Enter the marks for 3 subjects: ";
    cin >> phy;
    file << phy << endl;
    cin >> chem;
    file << chem << endl;
    cin >> math;
    file << math << endl;

    file >> name;
    file >> gender;
    file >> phy;
    file >> chem;
    file >> math;
    // cout << name << " " << gender << endl;
    // cout << phy << chem << math << endl;
    float avg = 0;
    avg = (phy + chem + math)/3.0;
    cout << "Average marks: " << avg << endl;
    return 0;
}