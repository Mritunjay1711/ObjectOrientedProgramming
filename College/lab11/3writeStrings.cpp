#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file;
    file.open("3output.txt", ios :: out);
    if(!file)
    {
        cout << "File doesnot exist!\n";
        exit(1);
    }
    string str;
    cout << "Enter 10 strings to enter in file\n";
    for(int i = 0; i < 10; i++)
    {
        cout << "Enter the string: ";
        cin >> str;
        file << str << endl;
    }
    file.close();
    file.open("3output.txt", ios :: in);
    for(int i = 0; i < 10; i++)
    {
        file >> str;
        cout << str << endl;
    }
    file.close();
    return 0;
}