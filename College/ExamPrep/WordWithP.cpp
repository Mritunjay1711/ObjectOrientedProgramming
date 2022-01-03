#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file;
    file.open("WordWithP.txt", ios :: out);
    char str[100];
    cout << "Enter the string: ";
    cin.getline(str, 100);

    file << str;
    file.close();

    file.open("WordWithP.txt", ios :: in);
    char ch[10];
    while(file)
    {
        file >> ch;
        // cout << ch << endl;
        if(ch[0] == 'p' || ch[0] == 'P')
            cout << ch << " ";
    }
    cout << endl;
    file.close();
    return 0;
}