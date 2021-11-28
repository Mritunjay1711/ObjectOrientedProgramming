#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file;
    file.open("9file.txt", ios :: in | ios :: out | ios :: trunc);

    if(!file)
    {
        cout << "File doesnot exist!\n";
        exit(1);
    }

    string str;
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter the data to write in file: ";
        cin >> str;
        file << str;
    }
    
    cout << "Printing data from file: \n";
    file >> str;
    cout << str;
    return 0;
}